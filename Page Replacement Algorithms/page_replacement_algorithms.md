# 🔄 Page Replacement Algorithms in C

This repository contains a collection of C programs designed to simulate page replacement algorithms, including **First-In-First-Out (FIFO)** and **Least Recently Used (LRU)**. These programs were developed to understand how operating systems manage memory by deciding which pages to swap out when memory is full.

By implementing these algorithms, I aimed to gain practical experience with memory management and its impact on system performance.

---

## 🎯 Purpose and Learning Objectives

The primary goal of this project was to learn about page replacement algorithms and their implementation. Specifically, I wanted to:

- Understand the mechanics of **FIFO** and **LRU** page replacement algorithms.
- Analyze metrics like **page faults** and their impact on system performance.
- Explore trade-offs between **simplicity** and **efficiency** in memory management.
- Develop skills in simulating memory management algorithms using **C**.
- Gain insights into the design of **virtual memory systems** in operating systems.

These programs provide a practical introduction to page replacement, bridging theoretical concepts with real-world applications.

---

## 📂 Programs Overview

Below is a summary of the programs included in this repository, each simulating a specific page replacement algorithm:

### 1. First-In-First-Out (FIFO)

- **Purpose:** Replaces the oldest page in memory when a new page is needed.  
- **Learning Outcome:** Demonstrates a simple but potentially inefficient page replacement strategy.

### 2. Least Recently Used (LRU)

- **Purpose:** Replaces the page that has not been used for the longest time.  
- **Learning Outcome:** Shows a more efficient strategy that tracks page usage history.

---

## ❓ Why These Programs?

These programs were created to:

- **Learn by Doing:** Simulating page replacement algorithms provided hands-on experience with memory management.
- **Compare Algorithms:** Implementing FIFO and LRU helped understand their performance differences.
- **Improve C Programming Skills:** Working with arrays and time-tracking mechanisms enhanced my proficiency in C.
- **Build a Foundation for Memory Management:** These simulations lay the groundwork for studying advanced memory management techniques.

---

## 📁 Repository Structure

- Each program is stored in a separate `.c` file (e.g., `fifo_page_replacement.c`, `lru_page_replacement.c`).
- The programs are designed to be compiled and run on UNIX-like systems (e.g., Linux, macOS).
- File names are descriptive to indicate the algorithm implemented.

---

## 🛠️ Compilation and Usage

To compile and run the programs:

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile a program using `gcc`:

   ```bash
   gcc -o fifo_page_replacement fifo_page_replacement.c
    ```
4. Run the executable:
    ```bash
    ./fifo_page_replacement
    ```

---

## ✅ Requirements

- A UNIX-like operating system (e.g., Linux, macOS)  
- A C compiler (e.g., `gcc`)

---

## 📌 Key Takeaways

Through this project, I gained a deeper understanding of:

- The mechanics of **FIFO** and **LRU** page replacement algorithms.
- The impact of **page faults** on system performance.
- Trade-offs between **simplicity** (FIFO) and **efficiency** (LRU) in memory management.
- The role of page replacement in **virtual memory systems**.
- Practical **C programming techniques** for simulating memory management algorithms.

### Planned Future Expansions Include:

- Optimal page replacement algorithm  
- Working set model  
- Page buffering techniques  

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork this repository  
2. Add new page replacement algorithms or improve existing implementations  
3. Suggest improvements or report issues  

Submit your changes via a pull request. Let’s collaborate and learn together!

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
