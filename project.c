#include <stdio.h>
#include <string.h>

#define MAX 100

struct Task {
    char task[100];
    int done;
};

struct Task tasks[MAX];
int count = 0;

void addTask(char task[]) {
    strcpy(tasks[count].task, task);
    tasks[count].done = 0;
    count++;
}

void viewTasks() {
    for (int i = 0; i < count; i++) {
        printf("%d. %s [%s]\n", i+1, tasks[i].task,
               tasks[i].done ? "✔️" : "❌");
    }
}

void markDone(int index) {
    if (index >= 0 && index < count) {
        tasks[index].done = 1;
    }
}

void deleteTask(int index) {
    if (index >= 0 && index < count) {
        for (int i = index; i < count-1; i++) {
            tasks[i] = tasks[i+1];
        }
        count--;
    }
}

int main() {
    addTask("Study DSA");
    addTask("Push project to GitHub");
    viewTasks();

    markDone(0);
    viewTasks();

    deleteTask(1);
    viewTasks();

    return 0;
}
