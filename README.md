# Task Scheduler

This program simulates a task scheduler that uses both priority-based scheduling and round-robin scheduling algorithms. It allows users to input task details such as task ID, priority, and execution time, and then calculates the average waiting time for executing all tasks using an efficiency analyzer.

## Prerequisites

- C++ compiler
- Standard Template Library (STL)

## Getting Started

1. Clone the repository or download the source code file.

```shell
git clone https://github.com/23456Arshia/-Task-Scheduling-System
```

2. Compile the source code using a C++ compiler.

```shell
g++ main.cpp -o task_scheduler
```

3. Run the executable.

```shell
./task_scheduler
```

## Usage

1. Enter the number of tasks when prompted.

```shell
Enter the number of tasks: 3
```

2. For each task, enter the task details: ID, priority, and execution time.

```shell
Enter details for Task 1 (id priority execution_time): 1 2 5
Enter details for Task 2 (id priority execution_time): 2 1 8
Enter details for Task 3 (id priority execution_time): 3 3 3
```

3. The program will simulate task execution using both priority-based scheduling and round-robin scheduling algorithms.

1. Finally, the program will display the average waiting time for executing all tasks.

```shell
Average Waiting Time: 5.66667
```

## Classes

### Task

Represents a task with an ID, priority, and execution time.

#### Properties

- `task_id` (int): The ID of the task.
- `priority` (int): The priority of the task.
- `execution_time` (int): The execution time required for the task.

#### Methods

- `Task(int id, int p, int time)`: Constructor method to initialize the task with the given ID, priority, and execution time.

### ComparePriority

Comparison functor used to compare tasks based on their priorities.

#### Methods

- `bool operator()(const Task& t1, const Task& t2)`: Comparison operator overload to compare two tasks based on their priorities.

### PriorityScheduler

A priority-based task scheduler that uses a priority queue to schedule tasks.

#### Properties

- `task_queue` (std::priority_queue\<Task, std::vector<Task>, ComparePriority>): The priority queue to store the tasks.

#### Methods

- `void addTask(const Task& task)`: Adds a task to the task queue.
- `bool isEmpty() const`: Checks if the task queue is empty.
- `Task getNextTask()`: Retrieves the next task with the highest priority from the task queue.

### RoundRobinScheduler

A round-robin task scheduler that uses a deque to schedule tasks.

#### Properties

- `task_queue` (std::deque<Task>): The deque to store the tasks.

#### Methods

- `void addTask(const Task& task)`: Adds a task to the task queue.
- `bool isEmpty() const`: Checks if the task queue is empty.
- `Task getNextTask()`: Retrieves the next task in a round-robin manner from the task queue.

### EfficiencyAnalyzer

A utility class to calculate efficiency statistics.

#### Methods

- `static double calculateAverageWaitingTime(const std::vector<int>& waiting_times)`: Calculates the average waiting time based on a vector of waiting times.

## License

This project is licensed under the [MIT License](LICENSE).
