# Task-Scheduling-System
This repository contains a C++ program that simulates task scheduling using two different scheduling algorithms: priority-based scheduling and round-robin scheduling. The program demonstrates the implementation of these scheduling algorithms, as well as the calculation of average waiting times for tasks.

# Task Scheduling Simulation

This C++ program simulates task scheduling using different scheduling algorithms: Priority Scheduling and Round-Robin Scheduling. The program uses various data structures and classes to manage tasks and analyze efficiency.

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
1. Input the number of tasks you want to simulate.
2. For each task, input its ID, priority, and execution time.
3. The program will execute tasks using both Priority Scheduling and Round-Robin Scheduling.
4. The average waiting time for both scheduling algorithms will be displayed.

## Simulation
The program simulates task execution using random execution times. It utilizes the `executeTask` function to generate a random execution time for each task within its specified execution time range.

## Efficiency Analysis
The `EfficiencyAnalyzer` class provides a static method to calculate the average waiting time of executed tasks. It takes a vector of waiting times as input and returns the average.

## Example
```cpp
Enter the number of tasks: 3
Enter details for Task 1 (id priority execution_time): 101 2 8
Enter details for Task 2 (id priority execution_time): 102 1 5
Enter details for Task 3 (id priority execution_time): 103 3 10
Average Waiting Time: 7.33333

