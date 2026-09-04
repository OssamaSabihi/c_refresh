# C - More singly linked lists

This project is a continuation of practicing **singly linked lists in C**.

The goal is to build a solid understanding of linked-list manipulation, dynamic memory allocation, pointers, and handling more advanced cases such as **reversing lists and detecting loops**.

## 📚 Data Structure

The project uses the following structure:

```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

Each node contains:

* `n` — the integer stored in the node.
* `next` — a pointer to the next node in the list.

---

## 📁 Header File

### `lists.h`

Contains the definition of `listint_t` and the prototypes for all functions implemented in this project.

```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

---

## 📋 Tasks

| #  | File                       | Function                    | Description                                                                       |
| -- | -------------------------- | --------------------------- | --------------------------------------------------------------------------------- |
| 0  | `0-print_listint.c`        | `print_listint()`           | Prints all elements of a `listint_t` linked list and returns the number of nodes. |
| 1  | `1-listint_len.c`          | `listint_len()`             | Returns the number of elements in a linked list.                                  |
| 2  | `2-add_nodeint.c`          | `add_nodeint()`             | Adds a new node at the beginning of a linked list.                                |
| 3  | `3-add_nodeint_end.c`      | `add_nodeint_end()`         | Adds a new node at the end of a linked list.                                      |
| 4  | `4-free_listint.c`         | `free_listint()`            | Frees an entire linked list.                                                      |
| 5  | `5-free_listint2.c`        | `free_listint2()`           | Frees a linked list and sets the head pointer to `NULL`.                          |
| 6  | `6-pop_listint.c`          | `pop_listint()`             | Deletes the head node and returns its data.                                       |
| 7  | `7-get_nodeint.c`          | `get_nodeint_at_index()`    | Returns the node located at a given index.                                        |
| 8  | `8-sum_listint.c`          | `sum_listint()`             | Returns the sum of all node values.                                               |
| 9  | `9-insert_nodeint.c`       | `insert_nodeint_at_index()` | Inserts a new node at a given position.                                           |
| 10 | `10-delete_nodeint.c`      | `delete_nodeint_at_index()` | Deletes the node at a given index.                                                |
| 11 | `100-reverse_listint.c`    | `reverse_listint()`         | Reverses a linked list using a maximum of one loop and two variables.             |
| 12 | `101-print_listint_safe.c` | `print_listint_safe()`      | Safely prints a linked list, including lists containing loops.                    |
| 13 | `102-free_listint_safe.c`  | `free_listint_safe()`       | Safely frees a linked list, including lists containing loops.                     |
| 14 | `103-find_loop.c`          | `find_listint_loop()`       | Finds the node where a loop starts in a linked list.                              |

---

## 🔎 Task Details

### 0. Print list

**File:** `0-print_listint.c`

Prints every element of a `listint_t` linked list.

**Return:** The number of nodes in the list.

---

### 1. List length

**File:** `1-listint_len.c`

Returns the number of nodes contained in a `listint_t` linked list.

---

### 2. Add node

**File:** `2-add_nodeint.c`

Adds a new node to the **beginning** of a linked list.

**Return:**

* The address of the newly created node on success.
* `NULL` if memory allocation fails.

---

### 3. Add node at the end

**File:** `3-add_nodeint_end.c`

Adds a new node to the **end** of a linked list.

**Return:**

* The address of the newly created node on success.
* `NULL` if memory allocation fails.

---

### 4. Free list

**File:** `4-free_listint.c`

Frees every node in a `listint_t` linked list.

---

### 5. Free

**File:** `5-free_listint2.c`

Frees every node in a linked list and sets the head pointer to `NULL`.

---

### 6. Pop

**File:** `6-pop_listint.c`

Deletes the first node of a linked list.

**Return:**

* `0` if the list is empty.
* The data stored in the deleted head node otherwise.

---

### 7. Get node at index

**File:** `7-get_nodeint.c`

Locates a node at a specific index in a linked list.

**Return:**

* The address of the requested node.
* `NULL` if the index does not exist.

---

### 8. Sum list

**File:** `8-sum_listint.c`

Calculates the sum of all values stored in the linked list.

**Return:**

* `0` if the list is empty.
* The sum of all node values otherwise.

---

### 9. Insert

**File:** `9-insert_nodeint.c`

Inserts a new node at a specified index.

**Return:**

* The address of the newly created node on success.
* `NULL` if the node cannot be inserted or memory allocation fails.

---

### 10. Delete at index

**File:** `10-delete_nodeint.c`

Deletes the node located at a specified index.

**Return:**

* `1` if the deletion succeeds.
* `-1` if the deletion fails.

---

### 11. Reverse list

**File:** `100-reverse_listint.c`

Reverses a singly linked list **in place**.

The implementation uses a maximum of **one loop and two variables**, as required by the task.

**Return:** A pointer to the first node of the reversed list.

---

### 12. Print safely

**File:** `101-print_listint_safe.c`

Prints a linked list safely, including lists that contain a **loop**.

Unlike a normal linked-list traversal, the function must avoid getting stuck in an infinite loop.

**Return:** The number of nodes printed.

---

### 13. Free safely

**File:** `102-free_listint_safe.c`

Safely frees a linked list, including lists containing loops.

The function must avoid attempting to free the same node more than once.

**Return:** The number of nodes that were freed.

After freeing, the head pointer is set to `NULL`.

---

### 14. Find the loop

**File:** `103-find_loop.c`

Finds a loop contained within a `listint_t` linked list.

The implementation uses a maximum of **two variables**.

**Return:**

* The address of the node where the loop starts.
* `NULL` if the list contains no loop.

---

## 🛠️ Compilation

The files can be compiled using `gcc`.

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

---

## 🧠 Concepts Practiced

Through this project, I practiced:

* Singly linked lists
* Structures in C
* Pointers and pointer-to-pointer manipulation
* Dynamic memory allocation
* `malloc()` and `free()`
* Traversing linked lists
* Inserting and deleting nodes
* Reversing linked lists
* Memory management
* Handling empty lists
* Detecting linked-list loops
* Safely traversing cyclic data structures
* Working with strict algorithmic constraints

---

## 📂 Project Structure

```text
.
├── lists.h
├── 0-print_listint.c
├── 1-listint_len.c
├── 2-add_nodeint.c
├── 3-add_nodeint_end.c
├── 4-free_listint.c
├── 5-free_listint2.c
├── 6-pop_listint.c
├── 7-get_nodeint.c
├── 8-sum_listint.c
├── 9-insert_nodeint.c
├── 10-delete_nodeint.c
├── 100-reverse_listint.c
├── 101-print_listint_safe.c
├── 102-free_listint_safe.c
└── 103-find_loop.c
```

---

## 🎯 Objective

The main objective of this project is to become more comfortable with **pointers, dynamic memory, and linked-list manipulation in C**, while learning how to handle more complex situations such as cyclic linked lists and constrained algorithms.
