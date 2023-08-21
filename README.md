# -Task-Scheduling-System
This repository contains a C++ program that simulates task scheduling using two different scheduling algorithms: priority-based scheduling and round-robin scheduling. The program demonstrates the implementation of these scheduling algorithms, as well as the calculation of average waiting times for tasks.

Task Scheduling Simulation in C++

This C++ program simulates task scheduling using two different scheduling algorithms: priority-based scheduling and round-robin scheduling. It demonstrates the implementation of these algorithms and calculates the average waiting time for tasks.

Table of Contents

Overview
Features
Usage
Getting Started
License
Contributing
Overview

This program showcases the concepts of priority-based and round-robin task scheduling. It allows you to input tasks with specific priorities and execution times, simulates their execution, and calculates the average waiting time for each scheduling algorithm.

Features

Priority-Based Scheduling: Demonstrates the use of a priority queue to execute tasks based on their priorities.
Round-Robin Scheduling: Illustrates round-robin scheduling through the use of a deque, ensuring fair execution of tasks.
Efficiency Analysis: Calculates and displays the average waiting time for tasks executed using both scheduling algorithms.
Random Execution Time: Simulates the execution time of tasks using random numbers, adding realism to the simulation.
Usage

Compile the main.cpp file using a C++ compiler (e.g., g++):
sh
Copy code
g++ -o task_scheduler main.cpp
Run the compiled executable:
sh
Copy code
./task_scheduler
Follow the on-screen prompts to input the number of tasks, task details (ID, priority, execution time), and observe the average waiting time for both priority-based and round-robin scheduling.
Getting Started

To get started with this project, you'll need a C++ compiler (such as g++) and a basic understanding of C++ programming.

Clone the Repository:
sh
Copy code
git clone https://github.com/123456Arshia/task-scheduling.git
cd task-scheduling
Compile and Run:
Compile the code and run the executable as described in the "Usage" section.
Explore and Modify:
Feel free to explore the code, modify it, and experiment with different scenarios. You can customize the number of tasks, priorities, and execution times to observe their impact on scheduling.
License

This project is licensed under the MIT License.

Contributing

Contributions are welcome! If you find any issues or would like to enhance this project, feel free to submit a pull request. Please ensure that your code follows the project's coding standards and practices.
