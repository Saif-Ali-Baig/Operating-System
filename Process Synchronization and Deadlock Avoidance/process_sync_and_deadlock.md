# 🔐 Process Synchronization and Deadlock Avoidance in C

This repository contains a collection of C programs designed to explore **process synchronization** and **deadlock avoidance** techniques. The programs cover classical synchronization problems (Dining Philosophers, Producer-Consumer, Readers-Writers) and the **Banker's Algorithm** for deadlock avoidance.

These programs were developed to understand how to manage shared resources and prevent deadlocks in multi-process systems.  
By implementing them, I aimed to gain practical experience with synchronization mechanisms and resource allocation strategies in UNIX-like systems.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about process synchronization and deadlock avoidance. Specifically, I wanted to:

- Understand how to use **semaphores** and **mutexes** to synchronize processes and threads
- Explore solutions to **classical synchronization problems**
- Learn the **Banker's Algorithm** for safe resource allocation
- Develop skills in managing **concurrent access** to shared resources
- Gain insights into preventing and avoiding **deadlocks** in operating systems

These programs provide a practical foundation for studying **concurrent programming** and **resource management**.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each focusing on a specific synchronization or deadlock avoidance technique:

### 1. Dining Philosophers

- **Purpose**: Simulates philosophers sharing resources (chopsticks) to avoid deadlock and starvation  
- **Learning Outcome**: Demonstrates semaphore-based synchronization to manage shared resources

### 2. Producer-Consumer

- **Purpose**: Models producers adding items to a buffer and consumers removing them  
- **Learning Outcome**: Shows how to use semaphores and mutexes for bounded buffer synchronization

### 3. Readers-Writers

- **Purpose**: Manages multiple readers and writers accessing a shared resource  
- **Learning Outcome**: Illustrates priority-based synchronization to prevent writer starvation

### 4. Banker's Algorithm

- **Purpose**: Ensures safe resource allocation to avoid deadlocks  
- **Learning Outcome**: Demonstrates how to check for a safe state in resource allocation

---

## ❓ Why These Programs?

These programs were created to:

- ✅ **Learn by Doing**: Implementing synchronization and deadlock avoidance provided hands-on experience with concurrency challenges
- 🧠 **Understand Concurrency Issues**: Exploring classical problems clarified the need for proper synchronization
- 💻 **Improve C Programming Skills**: Working with semaphores, mutexes, and resource allocation algorithms enhanced my proficiency in C
- 📚 **Prepare for Advanced Topics**: These programs lay the groundwork for studying more complex concurrency and deadlock prevention strategies

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `dining_philosophers.c`, `bankers_algorithm.c`)
- The programs are designed to be compiled and run on **UNIX-like systems** (e.g., Linux, macOS)
- File names are descriptive to indicate their functionality

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
    ```
2. Compile a program using gcc with the pthread library:
    ```bash
    gcc -o dining_philosophers dining_philosophers.c -pthread
    ```
3. Run the executable:
    ```bash
    ./dining_philosophers
    ```

---

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)
- A C compiler (e.g., `gcc`)
- POSIX thread library (`-pthread`) for synchronization programs

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- Synchronization mechanisms like **semaphores** and **mutexes**
- Solutions to classical synchronization problems and their practical applications
- The **Banker's Algorithm** for deadlock avoidance in resource allocation
- The importance of preventing **race conditions** and **deadlocks** in concurrent systems
- Practical **C programming techniques** for managing concurrency

### Planned Future Expansions Include:

- Additional synchronization problems (e.g., Sleeping Barber)  
- Deadlock detection and recovery algorithms  
- Advanced resource allocation strategies  

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork this repository  
2. Add new synchronization or deadlock avoidance techniques  
3. Suggest improvements or report issues  

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
