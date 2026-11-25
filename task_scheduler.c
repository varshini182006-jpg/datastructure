#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

typedef struct Task {
    int id;
    char name[50];
    int priority;      // 1 = High, 2 = Medium, 3 = Low
    char deadline[20];
    char status[20];   // e.g., Pending, Completed
    struct Task* next;
} Task;

int graph[MAX_TASKS][MAX_TASKS]; // Dependency matrix
int inDegree[MAX_TASKS];          // For topological sorting

Task* insertTask(Task* head, Task* newTask) {
    if (head == NULL || newTask->priority < head->priority) {
        newTask->next = head;
        return newTask;
    }

    Task* current = head;
    while (current->next != NULL &&
           current->next->priority <= newTask->priority) {
        current = current->next;
    }

    newTask->next = current->next;
    current->next = newTask;
    return head;
}

void displayTasks(Task* head) {
    printf("\\n--- Task List ---\\n");
    while (head != NULL) {
        printf("ID: %d | Name: %s | Priority: %d | Deadline: %s | Status: %s\\n",
               head->id, head->name, head->priority,
               head->deadline, head->status);
        head = head->next;
    }
}

void topologicalSort(int n) {
    int queue[MAX_TASKS], front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        if (inDegree[i] == 0)
            queue[rear++] = i;
    }

    while (front < rear) {
        int current = queue[front++];
        printf("Execute Task ID: %d\\n", current);

        for (int i = 0; i < n; i++) {
            if (graph[current][i]) {
                inDegree[i]--;
                if (inDegree[i] == 0)
                    queue[rear++] = i;
            }
        }
    }

    if (rear != n)
        printf("Error: Circular dependency detected.\\n");
}

int main() {
    Task* taskList = NULL;
    int choice;

    while (1) {
        printf("\\n1. Add Task\\n2. View Tasks\\n3. Exit\\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            Task* newTask = (Task*)malloc(sizeof(Task));
            if (newTask == NULL) {
                printf("Memory allocation failed.\\n");
                return 1;
            }

            printf("Enter Task ID: ");
            scanf("%d", &newTask->id);

            printf("Enter Task Name: ");
            scanf(" %[^\n]", newTask->name);

            printf("Enter Priority (1-High, 2-Medium, 3-Low): ");
            scanf("%d", &newTask->priority);

            printf("Enter Deadline (YYYY-MM-DD): ");
            scanf(" %[^\n]", newTask->deadline);

            strcpy(newTask->status, "Pending");
            newTask->next = NULL;
            taskList = insertTask(taskList, newTask);
        } else if (choice == 2) {
            displayTasks(taskList);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Try again.\\n");
        }
    }

    return 0;
}
