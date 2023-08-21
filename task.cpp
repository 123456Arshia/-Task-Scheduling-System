#include <iostream>
#include <queue>
#include <vector>
#include <deque>
#include <algorithm>
#include <random>

class Task {
public:
    int task_id;
    int priority;
    int execution_time;

    Task(int id, int p, int time) : task_id(id), priority(p), execution_time(time) {}
};

class ComparePriority {
public:
    bool operator()(const Task& t1, const Task& t2) {
        return t1.priority < t2.priority;
    }
};

class PriorityScheduler {
private:
    std::priority_queue<Task, std::vector<Task>, ComparePriority> task_queue;

public:
    void addTask(const Task& task) {
        task_queue.push(task);
    }

    bool isEmpty() const {
        return task_queue.empty();
    }

    Task getNextTask() {
        Task next_task = task_queue.top();
        task_queue.pop();
        return next_task;
    }
};

class RoundRobinScheduler {
private:
    std::deque<Task> task_queue;

public:
    void addTask(const Task& task) {
        task_queue.push_back(task);
    }

    bool isEmpty() const {
        return task_queue.empty();
    }

    Task getNextTask() {
        Task next_task = task_queue.front();
        task_queue.pop_front();
        return next_task;
    }
};

class EfficiencyAnalyzer {
public:
    static double calculateAverageWaitingTime(const std::vector<int>& waiting_times) {
        double sum = 0.0;
        for (int time : waiting_times) {
            sum += time;
        }
        return sum / waiting_times.size();
    }
};

// Simulate task execution with random execution times
int executeTask(Task& task) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, task.execution_time + 1);
    return dis(gen);
}

int main() {
    PriorityScheduler priority_scheduler;
    RoundRobinScheduler round_robin_scheduler;
    std::vector<int> waiting_times;

    int num_tasks;
    std::cout << "Enter the number of tasks: ";
    std::cin >> num_tasks;

    for (int i = 0; i < num_tasks; ++i) {
        int id, priority, execution_time;
        std::cout << "Enter details for Task " << i + 1 << " (id priority execution_time): ";
        std::cin >> id >> priority >> execution_time;

        Task task(id, priority, execution_time);
        priority_scheduler.addTask(task);
        round_robin_scheduler.addTask(task);
    }

    // Priority-based scheduling
    while (!priority_scheduler.isEmpty()) {
        Task task = priority_scheduler.getNextTask();
        int waiting_time = executeTask(task);
        waiting_times.push_back(waiting_time);
    }

    // Round-robin scheduling
    while (!round_robin_scheduler.isEmpty()) {
        Task task = round_robin_scheduler.getNextTask();
        int waiting_time = executeTask(task);
        waiting_times.push_back(waiting_time);
    }

    // Calculate and display efficiency statistics using EfficiencyAnalyzer
    double avg_waiting_time = EfficiencyAnalyzer::calculateAverageWaitingTime(waiting_times);
    std::cout << "Average Waiting Time: " << avg_waiting_time << std::endl;

    return 0;
}
