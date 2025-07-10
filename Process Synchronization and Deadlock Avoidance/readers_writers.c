#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t wrt;
pthread_mutex_t mutex;
int read_count = 0;
int shared_data = 100;

void* writer(void* arg) {
    sem_wait(&wrt);
    shared_data += 50;
    printf("Writer updated data to %d\n", shared_data);
    sem_post(&wrt);
    return NULL;
}

void* reader(void* arg) {
    int id = *(int*)arg;
    pthread_mutex_lock(&mutex);
    read_count++;
    if (read_count == 1) sem_wait(&wrt);
    pthread_mutex_unlock(&mutex);

    printf("Reader %d read data: %d\n", id, shared_data);

    pthread_mutex_lock(&mutex);
    read_count--;
    if (read_count == 0) sem_post(&wrt);
    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main() {
    pthread_t readers[3], writer_thread;
    int ids[3] = {1, 2, 3};
    sem_init(&wrt, 0, 1);
    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < 3; i++) {
        pthread_create(&readers[i], NULL, reader, &ids[i]);
    }
    pthread_create(&writer_thread, NULL, writer, NULL);

    for (int i = 0; i < 3; i++) {
        pthread_join(readers[i], NULL);
    }
    pthread_join(writer_thread, NULL);

    sem_destroy(&wrt);
    pthread_mutex_destroy(&mutex);
    return 0;
}