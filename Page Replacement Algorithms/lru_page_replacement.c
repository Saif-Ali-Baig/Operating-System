#include <stdio.h>

void lru(int pages[], int n, int capacity) {
    int frame[capacity], time[capacity], faults = 0, counter = 0;
    for (int i = 0; i < capacity; i++) frame[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < capacity; j++) {
            if (frame[j] == pages[i]) {
                found = 1;
                time[j] = counter++;
                break;
            }
        }

        if (!found) {
            int lru = 0;
            for (int j = 1; j < capacity; j++)
                if (time[j] < time[lru]) lru = j;

            frame[lru] = pages[i];
            time[lru] = counter++;
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
    lru(pages, n, capacity);
    return 0;
}