# Process and Thread Concepts in C

This repository contains a collection of C programs designed to explore process-related and thread-related concepts in UNIX-like operating systems. These programs were developed as a learning exercise to deepen understanding of how processes and threads are managed, providing hands-on experience with operating system fundamentals.

By implementing these programs, I aimed to gain practical insights into process creation, management, and thread-based concurrency, which are critical components of modern operating systems.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about process and thread management in UNIX-like systems. Specifically, I wanted to:

- Understand process creation and execution using system calls like `fork` and `exec`.
- Explore thread creation and synchronization using POSIX threads (`pthreads`).
- Learn about parent-child process relationships and thread concurrency within a single process.
- Develop skills in managing system resources and handling concurrency-related challenges.
- Build a foundation for advanced operating system concepts like synchronization and inter-process communication.

These programs serve as a practical introduction to process and thread management, bridging theoretical knowledge with real-world application.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each focusing on a specific aspect of process or thread management:

### 1. Process Creation and Execution

- **Purpose**: Creates a child process and executes a command.  
- **System Calls Used**: `fork`, `execvp`, `wait`.  
- **Learning Outcome**: Demonstrates how to create and manage processes, including parent-child relationships and program execution.

### 2. Thread Creation and Synchronization

- **Purpose**: Creates multiple threads and ensures they execute concurrently.  
- **System Calls Used**: POSIX thread functions (`pthread_create`, `pthread_join`).  
- **Learning Outcome**: Shows how to manage threads within a process, highlighting shared memory and synchronization techniques.

---

## ❓ Why These Programs?

These programs were created to:

- **Learn by Doing**: Implementing process and thread management provided hands-on experience with core OS concepts.
- **Understand Concurrency**: Exploring processes and threads helped clarify the differences between heavyweight processes and lightweight threads.
- **Improve C Programming Skills**: Working with low-level system calls and thread APIs required careful resource management and error handling.
- **Prepare for Advanced Topics**: These programs lay the groundwork for studying synchronization, inter-process communication, and scheduling algorithms.

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `process_demo.c`, `thread_demo.c`).
- The programs are designed to be compiled and run on UNIX-like systems (e.g., Linux, macOS).
- File names are descriptive to indicate their functionality.

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile a program using `gcc`:
   ```bash
   gcc -o process_demo process_demo.c
   ```
4. For thread programs, include the pthread library:
    ```bash
    gcc -o thread_demo thread_demo.c -pthread
    ```
5. Run the executable:
    ```bash
    ./process_demo
    ```
---

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)
- A C compiler (e.g., `gcc`)
- POSIX thread library for thread-related programs

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- Process creation and management using `fork` and `exec`.
- Thread creation and synchronization using `pthreads`.
- The differences between processes and threads in terms of resource usage and concurrency.
- The importance of proper resource management and error handling in concurrent programming.
- Fundamental OS concepts that underpin modern computing environments.

### Planned Future Expansions Include:

- Process synchronization techniques  
- Inter-process communication mechanisms  
- Advanced thread synchronization problems  

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork this repository  
2. Add new programs demonstrating other process or thread concepts  
3. Suggest improvements or report issues  

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
