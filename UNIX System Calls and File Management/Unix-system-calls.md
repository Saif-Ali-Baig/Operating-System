# UNIX System Calls and File Management in C

This repository contains a collection of C programs designed to explore and understand UNIX system calls and file management operations. These programs were developed as a learning exercise to deepen knowledge of operating system concepts, particularly how user-level programs interact with the UNIX kernel through system calls.

By implementing these programs, I aimed to gain hands-on experience with low-level file operations, process creation, and system resource management, which are fundamental to understanding how operating systems function.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about UNIX system calls and their role in operating system interactions. Specifically, I wanted to:

- Understand how to manipulate files (create, read, write, and copy) using system calls like `open`, `read`, `write`, and `close`.
- Explore process creation and execution using `fork` and `execvp` to grasp process management in UNIX.
- Retrieve and interpret file metadata using `stat` to learn about file system structures.
- Build practical skills in error handling and resource management in C programming.
- Gain insights into the UNIX operating system's design and its low-level interfaces, which form the backbone of many modern systems.

These programs serve as a practical introduction to operating system concepts, bridging the gap between theoretical knowledge and real-world application.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each focusing on a specific aspect of UNIX system calls and file management:

### 1. File Creation and Writing
- **Purpose:** Creates a file and writes data to it.  
- **System Calls Used:** `open`, `write`, `close`.  
- **Learning Outcome:** Demonstrates how to create files with specific permissions and write data, emphasizing file descriptor management.

### 2. Reading from a File
- **Purpose:** Reads and displays the contents of a file.  
- **System Calls Used:** `open`, `read`, `close`.  
- **Learning Outcome:** Shows how to read file contents into a buffer and handle file input operations.

### 3. Retrieving File Metadata
- **Purpose:** Retrieves and displays metadata (e.g., size, permissions, modification time) of a file.  
- **System Calls Used:** `stat`.  
- **Learning Outcome:** Illustrates how to access file system metadata, providing insight into file attributes.

### 4. Fork and Exec System Calls
- **Purpose:** Creates a child process and executes the `ls -l` command.  
- **System Calls Used:** `fork`, `execvp`, `wait`.  
- **Learning Outcome:** Explores process creation and program execution, highlighting parent-child process relationships.

### 5. File Copying
- **Purpose:** Copies the contents of one file to another.  
- **System Calls Used:** `open`, `read`, `write`, `close`.  
- **Learning Outcome:** Demonstrates file I/O operations in a practical context, simulating the behavior of the `cp` command.

---

## ❓ Why These Programs?

These programs were created to:

- **Learn by Doing:** Writing and testing these programs provided hands-on experience with UNIX system calls, reinforcing theoretical concepts through practical implementation.
- **Understand Operating Systems:** System calls are the interface between user programs and the OS kernel. These programs helped me understand how file systems and processes are managed at a low level.
- **Improve C Programming Skills:** Working with system calls required careful handling of file descriptors, error checking, and memory management, enhancing my proficiency in C.
- **Build a Foundation for Advanced Topics:** Mastering these basics lays the groundwork for exploring more complex OS concepts like process synchronization, inter-process communication, and scheduling algorithms.

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `file_create_write.c`, `file_read.c`).
- The programs are designed to be compiled and run on UNIX-like systems (e.g., Linux, macOS).
- File names are descriptive to indicate their functionality.

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile a program using `gcc`:
   ```bash
   gcc -o file_create_write file_create_write.c
    ```
4. Run the executable:
    ```bash
    ./file_create_write
    ```
Note: Some programs (e.g., file_read.c, file_copy.c) depend on output.txt, which is created by file_create_write.c. Run the file creation program first.

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)
- A C compiler (e.g., `gcc`)
- The `ls` command must be available in the system’s `PATH` (required for the `fork_exec.c` program)

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- The role of system calls in communication between user programs and the UNIX kernel
- File descriptor management and the importance of resource cleanup
- Process creation, execution, and synchronization using `fork`, `execvp`, and `wait`
- Error handling techniques in low-level C programming
- The structure and attributes of the UNIX file system

This repository serves as both a hands-on learning tool and a reference for developers exploring UNIX system programming.

Planned future expansions include:

- Process synchronization
- Inter-process communication (IPC)
- Scheduling algorithms

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

- Fork this repository
- Add new programs demonstrating other UNIX system calls
- Suggest improvements or report issues

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the **MIT License**.  