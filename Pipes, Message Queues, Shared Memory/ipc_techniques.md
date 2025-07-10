# 🔄 Inter-Process Communication (IPC) Techniques in C

This repository contains a collection of C programs designed to explore inter-process communication (IPC) techniques, including **pipes**, **message queues**, and **shared memory**. These programs were developed to understand how processes exchange data and coordinate in UNIX-like systems.

By implementing these programs, I aimed to gain practical experience with IPC mechanisms, which are essential for building robust, multi-process applications.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about IPC techniques and their implementation. Specifically, I wanted to:

- Understand how **pipes** facilitate communication between related processes.
- Explore **message queues** for structured data exchange between processes.
- Learn about **shared memory** for efficient data sharing.
- Develop skills in managing IPC resources and handling synchronization issues.
- Gain insights into the design of multi-process systems in UNIX.

These programs provide a practical introduction to IPC, bridging theoretical concepts with real-world applications.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each focusing on a specific IPC technique:

### 1. Pipes

- **Purpose**: Enables unidirectional communication between a parent and child process.  
- **Learning Outcome**: Demonstrates how to create and use pipes for simple data transfer.

### 2. Message Queues

- **Purpose**: Allows processes to send and receive structured messages.  
- **Learning Outcome**: Shows how to manage message queues for prioritized or typed communication.

### 3. Shared Memory

- **Purpose**: Enables multiple processes to share a common memory region.  
- **Learning Outcome**: Illustrates efficient data sharing with considerations for synchronization.

---

## ❓ Why These Programs?

These programs were created to:

- **Learn by Doing**: Implementing IPC techniques provided hands-on experience with process communication.
- **Understand System Design**: Exploring different IPC methods clarified their use cases and trade-offs.
- **Improve C Programming Skills**: Working with IPC required careful resource management and error handling.
- **Prepare for Advanced Topics**: These programs lay the foundation for studying synchronization and concurrent programming.

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `pipe_ipc.c`, `msg_queue.c`, `shared_memory.c`).
- The programs are designed to be compiled and run on UNIX-like systems (e.g., Linux, macOS).
- File names are descriptive to indicate the IPC technique implemented.

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile a program using `gcc`:
   ```bash
   gcc -o pipe_ipc pipe_ipc.c
    ```
4. For message queues or shared memory, link the real-time library if needed:
    ```bash
    gcc -o msg_queue msg_queue.c -lrt
    ```
5. Run the executable:
    ```bash
    ./pipe_ipc
    ```

---

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)
- A C compiler (e.g., `gcc`)
- Real-time library (`-lrt`) for message queues and shared memory programs

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- The mechanics of **pipes**, **message queues**, and **shared memory** for IPC.
- The importance of **synchronization** in shared memory systems.
- **Resource management and cleanup** in IPC implementations.
- The trade-offs between different IPC techniques in terms of **speed** and **complexity**.
- Practical **C programming techniques** for inter-process communication.

### Planned Future Expansions Include:

- Semaphore-based synchronization  
- Signal handling  
- Advanced IPC mechanisms like sockets  

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork this repository  
2. Add new IPC techniques or improve existing implementations  
3. Suggest improvements or report issues  

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
