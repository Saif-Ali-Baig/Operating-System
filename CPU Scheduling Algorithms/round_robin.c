#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
};

void round_robin(struct Process proc[], int n, int quantum) {
    int time = 0, remaining = n, total_waiting = 0, total_turnaround = 0;

    for (int i = 0; i < n; i++) {
        proc[i].remaining_time = proc[i].burst_time;
    }

    while (remaining > 0) {
        for (int i = 0; i < n; i++) {
            if (proc[i].remaining_time > 0) {
                if (proc[i].remaining_time <= quantum) {
                    time += proc[i].remaining_time;
                    proc[i].remaining_time = 0;
                    proc[i].turnaround_time = time;
                    proc[i].waiting_time = proc[i].turnaround_time - proc[i].burst_time;
                    remaining--;
                } else {
                    time += quantum;
                    proc[i].remaining_time -= quantum;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        total_waiting += proc[i].waiting_time;
        total_turnaround += proc[i].turnaround_time;
    }

    printf("Round Robin Scheduling (Quantum = %d):\n", quantum);
    printf("PID\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\n", proc[i].pid, proc[i].burst_time, proc[i].waiting_time, proc[i].turnaround_time);
    }
    printf("Average Waiting Time: %.2f\n", (float)total_waiting/n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround/n);
}

int main() {
    struct Process proc[] = {{1, 10}, {2, 5}, {3, 8}};
    int n = 3, quantum = 4;
    round_robin(proc, n, quantum);
    return 0;
}