#include <stdio.h>

void fifo(int pages[], int n, int capacity) {
    int frame[capacity], faults = 0, front = 0;
    for (int i = 0; i < capacity; i++) frame[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < capacity; j++) {
            if (frame[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            frame[front] = pages[i];
            front = (front + 1) % capacity;
            faults++;
            printf("Page %d -> Frame: ", pages[i]);
            for (int j = 0; j < capacity; j++)
                printf("%d ", frame[j]);
            printf("\n");
        }
    }
    printf("Total Page Faults: %d\n", faults);
}

int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = 13, capacity = 4;
    fifo(pages, n, capacity);
    return 0;
}