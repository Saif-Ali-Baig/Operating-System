# ⚙️ CPU Scheduling Algorithms in C

This repository contains a collection of C programs designed to simulate CPU scheduling algorithms, including First-Come-First-Serve (FCFS), Shortest Job First (SJF), and Round Robin (RR). These programs were developed to understand how operating systems allocate CPU time to processes—a critical aspect of system performance.

By implementing these algorithms, I aimed to gain hands-on experience with process scheduling and its impact on system efficiency and responsiveness.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about CPU scheduling algorithms and their implementation. Specifically, I wanted to:

- Understand the mechanics of **FCFS**, **SJF**, and **RR** algorithms.
- Analyze metrics like **waiting time**, **turnaround time**, and **throughput**.
- Explore trade-offs between **fairness**, **efficiency**, and **responsiveness** in scheduling.
- Develop skills in simulating OS algorithms using **C**.
- Gain insights into how scheduling decisions affect system performance.

These programs provide a practical way to study and compare different scheduling strategies.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each simulating a specific CPU scheduling algorithm:

### 1. First-Come-First-Serve (FCFS)

- **Purpose**: Schedules processes in the order they arrive.  
- **Learning Outcome**: Demonstrates a simple but potentially inefficient scheduling approach, highlighting issues like the convoy effect.

### 2. Shortest Job First (SJF)

- **Purpose**: Schedules the process with the shortest burst time first.  
- **Learning Outcome**: Shows how to minimize average waiting time, though it requires prior knowledge of burst times.

### 3. Round Robin (RR)

- **Purpose**: Schedules processes with a fixed time quantum in a cyclic order.  
- **Learning Outcome**: Illustrates a fair and responsive scheduling method suitable for time-sharing systems.

---

## ❓ Why These Programs?

These programs were created to:

- **Learn by Doing**: Simulating scheduling algorithms provided practical insights into OS process management.
- **Compare Algorithms**: Implementing multiple algorithms helped understand their strengths and weaknesses.
- **Improve C Programming Skills**: Working with arrays, structures, and loops enhanced my proficiency in C.
- **Build a Foundation for OS Design**: These simulations lay the groundwork for studying more complex scheduling and resource allocation strategies.

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `fcfs.c`, `sjf.c`, `round_robin.c`).
- The programs are designed to be compiled and run on UNIX-like systems (e.g., Linux, macOS).
- File names are descriptive to indicate the algorithm implemented.

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile a program using `gcc`:
   ```bash
   gcc -o fcfs fcfs.c
    ```
4. Run the executable:
    ```bash
    ./fcfs
    ```

---

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)
- A C compiler (e.g., `gcc`)

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- The mechanics and trade-offs of **FCFS**, **SJF**, and **RR** scheduling algorithms.
- How to calculate **waiting time**, **turnaround time**, and other performance metrics.
- The impact of scheduling decisions on **system performance** and **fairness**.
- The role of **CPU scheduling** in optimizing **resource utilization**.
- Practical **C programming techniques** for simulating OS algorithms.

### Planned Future Expansions Include:

- Priority scheduling  
- Multilevel queue scheduling  
- Real-time scheduling algorithms  

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork this repository  
2. Add new scheduling algorithms or improve existing ones  
3. Suggest improvements or report issues  

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
