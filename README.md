# Task Scheduling Simulation

This C++ program simulates task scheduling using two different scheduling algorithms: Priority Scheduling and Round-Robin Scheduling. The program uses various data structures and classes to manage tasks and analyze efficiency.

## Table of Contents
- [Introduction](#introduction)
- [Classes](#classes)
- [Usage](#usage)
- [Simulation](#simulation)
- [Efficiency Analysis](#efficiency-analysis)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Introduction
This program demonstrates task scheduling using two different algorithms: Priority Scheduling and Round-Robin Scheduling. It provides a way to input task details and simulates their execution. The waiting times of executed tasks are collected and analyzed to calculate average waiting times.

## Classes
1. `Task`: Represents a task with an ID, priority, and execution time.
2. `ComparePriority`: Comparator class used to compare tasks based on their priority.
3. `PriorityScheduler`: Implements priority-based task scheduling using a priority queue.
4. `RoundRobinScheduler`: Implements round-robin task scheduling using a deque.
5. `EfficiencyAnalyzer`: Contains a static method to calculate the average waiting time from a vector of waiting times.

## Usage
1. Make sure you have a C++ compiler installed on your system.
2. Clone this repository to your local machine.
3. Navigate to the directory containing the program files.
4. Compile the program using your C++ compiler: `g++ -o scheduler main.cpp`.
5. Run the executable: `./scheduler`.
6. Follow the prompts to input task details and observe the simulation results.

## Simulation
The program simulates task execution using random execution times. It utilizes the `executeTask` function to generate a random execution time for each task within its specified execution time range.

## Efficiency Analysis
The `EfficiencyAnalyzer` class provides a static method to calculate the average waiting time of executed tasks. It takes a vector of waiting times as input and returns the average.

## Example
```plaintext
Enter the number of tasks: 3
Enter details for Task 1 (id priority execution_time): 101 2 8
Enter details for Task 2 (id priority execution_time): 102 1 5
Enter details for Task 3 (id priority execution_time): 103 3 10
Average Waiting Time: 7.33333
Contributing

Feel free to contribute, enhance, and modify the program as needed. If you find any issues or have suggestions for improvements, please open an issue or pull request.

License

This project is licensed under the MIT License.

Disclaimer: This program is for educational purposes and may not cover all possible edge cases or real-world scenarios. Use it as a starting point for understanding task scheduling algorithms in a simulated environment.


