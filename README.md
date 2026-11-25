# 📋 Task Scheduler Using Data Structures

## 📌 Project Overview

The **Task Scheduler** is a C-based task management and scheduling project developed to demonstrate the practical application of fundamental data structures.

The project manages tasks based on priority levels and deadlines using a Singly Linked List. It also explains graph-based dependency management and topological sorting for determining task execution order.

## 🎯 Objectives

- Efficiently manage and organize multiple tasks.
- Add and display tasks dynamically.
- Prioritize tasks based on priority levels.
- Organize tasks according to deadlines.
- Represent task dependencies using graphs.
- Apply topological sorting for dependency-based scheduling.
- Demonstrate the practical application of data structures.

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C Programming | Implementation |
| Structures | Store task details |
| Singly Linked List | Dynamic task storage |
| Graph | Represent task dependencies |
| Adjacency Matrix | Store graph relationships |
| Queue | Support topological sorting |
| In-degree Array | Track incoming graph edges |

## ✨ Key Features

- ➕ **Add Tasks:** Add tasks with ID, name, priority, and deadline.
- 📋 **View Tasks:** Display all stored tasks.
- ⚡ **Priority-Based Scheduling:** Arrange tasks according to priority.
- 🔗 **Dependency Management:** Represent dependencies using graphs.
- 🔄 **Dynamic Task Management:** Store tasks using linked lists.
- 📊 **Topological Sorting:** Determine dependency-based execution order.
- 🚫 **Cycle Detection:** Identify circular dependencies.
- 🖥️ **Menu-Driven Interface:** Simple console-based interaction.

### Priority Levels

| Priority | Meaning |
|---|---|
| 1 | High |
| 2 | Medium |
| 3 | Low |

## 🏗️ System Architecture

### System Workflow

```text
       ┌──────────────────────┐
       │      User Input      │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │   Task Definition    │
       │ ID, Name, Priority,  │
       │ Deadline, Status     │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │   Task Management    │
       │   Singly Linked List │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Scheduling Mechanism │
       │ Priority & Dependency│
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │  Task Execution Order│
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │    Display Tasks     │
       └──────────────────────┘
```

### Data Structures Used

| Data Structure | Application |
|---|---|
| Singly Linked List | Stores tasks dynamically |
| Priority-Based Ordering | Arranges tasks by priority |
| Graph | Represents task dependencies |
| Adjacency Matrix | Stores dependency relationships |
| Queue | Supports topological sorting |
| In-degree Array | Tracks incoming dependency edges |

## 🗂️ Task Structure

| Field | Data Type | Description |
|---|---|---|
| id | int | Unique task ID |
| name | char[50] | Task name |
| priority | int | Priority level |
| deadline | char[20] | Task deadline |
| status | char[20] | Task status |
| next | struct Task* | Pointer to the next task |

### Dependency Representation

| Variable | Data Type | Description |
|---|---|---|
| graph | int[MAX_TASKS][MAX_TASKS] | Dependency matrix |
| inDegree | int[MAX_TASKS] | Tracks incoming edges |

**Note:** The project uses in-memory data structures and does not require a relational database or SQL queries.

## 💻 C Source Code

The main implementation is available in:

`task_scheduler.c`

The program uses:
- Structures to define task details.
- Singly Linked Lists for dynamic storage.
- Priority-based insertion to organize tasks.
- Graphs and queues as concepts for dependency-based scheduling.

## 📊 Sample Output

### Sample Task Input

```text
Enter number of tasks: 3

Enter name of task 1: TV
Enter priority of task 1: 3

Enter name of task 2: HOMEWORK
Enter priority of task 2: 1

Enter name of task 3: PLAY
Enter priority of task 3: 2
```

### Task Execution Order

```text
HOMEWORK  (Priority: 1)
PLAY      (Priority: 2)
TV        (Priority: 3)
```

Tasks are arranged in ascending priority-number order, where 1 represents High, 2 represents Medium, and 3 represents Low.

## 📸 Project Screenshots

### 1. Source Code

Add your source code screenshot here.

![Source Code](images/source_code.png)

### 2. Program Output

Add your program output screenshot here.

![Program Output](images/output_screenshot.png)

### 3. Task Execution Order

Add your task execution screenshot here.

![Task Execution Order](images/task_execution.png)

## ⚙️ Installation and Setup

### Step 1: Clone the Repository

```bash
git clone https://github.com/your-username/task-scheduler.git
```

### Step 2: Navigate to the Project Directory

```bash
cd task-scheduler
```

### Step 3: Compile the Program

Using GCC:

```bash
gcc task_scheduler.c -o task_scheduler
```

### Step 4: Run the Program

**Linux / macOS:**

```bash
./task_scheduler
```

**Windows:**

```bash
task_scheduler.exe
```

## 🚀 Future Enhancements

- 🖥️ Graphical User Interface.
- 🔔 Task reminders and notifications.
- 🔁 Recurring task management.
- 🔍 Search and filtering options.
- ⚡ Advanced data structures such as Heaps, AVL Trees, and Hash Tables.
- 📈 Improved scheduling efficiency.
- 💾 File handling for permanent task storage.
- 🌐 IoT and Edge Computing integration.

## 🎓 Conclusion

The Task Scheduler project demonstrates the practical application of fundamental data structures in managing and organizing tasks efficiently.

By using linked lists, priority-based ordering, and graph-based dependency concepts, the project provides an understanding of how data structures can solve real-world scheduling problems.

It also provides a foundation for future improvements, including advanced scheduling algorithms, graphical interfaces, task reminders, and persistent storage.

## 👥 Project Team Members

| Name | Register Number |
|---|---|
| S. Varshini | 8115U24EC119 |

## 📚 References

1. Weiss, Mark Allen. *Data Structures and Algorithm Analysis in C*, 3rd Edition, Pearson, 2013.
2. Kernighan, Brian W., and Dennis M. Ritchie. *The C Programming Language*, 2nd Edition, Prentice Hall, 1988.
3. Sedgewick, Robert, and Kevin Wayne. *Algorithms*, 4th Edition, Addison-Wesley, 2011.
4. Cormen, Thomas H., et al. *Introduction to Algorithms*, 3rd Edition, MIT Press, 2009.

---

⭐ **If you find this project useful, consider giving the repository a star!**
