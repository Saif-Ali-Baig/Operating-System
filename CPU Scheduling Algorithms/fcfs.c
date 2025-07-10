#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

void fcfs(struct Process proc[], int n) {
    int total_waiting = 0, total_turnaround = 0;
    proc[0].waiting_time = 0;

    for (int i = 1; i < n; i++) {
        proc[i].waiting_time = proc[i-1].waiting_time + proc[i-1].burst_time;
    }

    for (int i = 0; i < n; i++) {
        proc[i].turnaround_time = proc[i].waiting_time + proc[i].burst_time;
        total_waiting += proc[i].waiting_time;
        total_turnaround += proc[i].turnaround_time;
    }

    printf("FCFS Scheduling:\n");
    printf("PID\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\n", proc[i].pid, proc[i].burst_time, proc[i].waiting_time, proc[i].turnaround_time);
    }
    printf("Average Waiting Time: %.2f\n", (float)total_waiting/n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround/n);
}

int main() {
    struct Process proc[] = {{1, 10}, {2, 5}, {3, 8}};
    int n = 3;
    fcfs(proc, n);
    return 0;
}