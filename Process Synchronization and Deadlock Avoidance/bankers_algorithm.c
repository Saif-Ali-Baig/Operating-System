#include <stdio.h>

#define N 5
#define M 3

void calculate_need(int need[N][M], int max[N][M], int alloc[N][M]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            need[i][j] = max[i][j] - alloc[i][j];
}

int is_safe(int processes[], int avail[], int max[][M], int alloc[][M]) {
    int need[N][M];
    calculate_need(need, max, alloc);

    int finish[N] = {0}, safe_seq[N], work[M], count = 0;

    for (int i = 0; i < M; i++) work[i] = avail[i];

    while (count < N) {
        int found = 0;
        for (int p = 0; p < N; p++) {
            if (finish[p] == 0) {
                int j;
                for (j = 0; j < M; j++)
                    if (need[p][j] > work[j]) break;

                if (j == M) {
                    for (int k = 0; k < M; k++)
                        work[k] += alloc[p][k];
                    safe_seq[count++] = p;
                    finish[p] = 1;
                    found = 1;
                }
            }
        }
        if (!found) return 0;
    }

    printf("Safe sequence: ");
    for (int i = 0; i < N; i++) printf("%d ", safe_seq[i]);
    printf("\n");
    return 1;
}

int main() {
    int processes[] = {0, 1, 2, 3, 4};
    int avail[] = {3, 3, 2};
    int max[][M] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int alloc[][M] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};

    if (is_safe(processes, avail, max, alloc))
        printf("System is in a safe state.\n");
    else
        printf("System is not in a safe state.\n");

    return 0;
}