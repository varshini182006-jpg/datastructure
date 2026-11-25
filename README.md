# 📋 Task Scheduler Using Data Structures

## Project Overview
A C-based task scheduler demonstrating priority-based task organization using a singly linked list. Tasks contain an ID, name, priority, deadline, and status.

## Features
- Add tasks
- View stored tasks
- Arrange tasks by priority (1 = High, 2 = Medium, 3 = Low)
- Uses a singly linked list for dynamic task storage

## Technology
- C programming
- Structures
- Singly linked list

## Compile and Run
Using GCC:

```bash
gcc task_scheduler.c -o task_scheduler
./task_scheduler
```

On Windows:

```bash
gcc task_scheduler.c -o task_scheduler.exe
task_scheduler.exe
```

## Sample Priority Order
For the example tasks:
- HOMEWORK — Priority 1
- PLAY — Priority 2
- TV — Priority 3

The linked-list insertion logic places smaller priority numbers before larger ones.

## Files
- `task_scheduler.c` — source code
- `sample_output.txt` — sample output text
- `images/output_screenshot.png` — output screenshot, if included in the ZIP

## Project Author
S. Varshini
