
# Student Management System Using Stack (C++)

## Project Overview
The **Student Management System** is a **console-based application** developed in **C++** as part of the **Data Structures and Algorithms (DSA)** course project.  
This project demonstrates the **practical implementation of the Stack data structure (LIFO – Last In, First Out)** to manage student records efficiently.

The system allows users to **insert, display, search, delete, count, undo operations**, and **store records permanently in a file**.  
A special **Undo feature** is implemented using an additional stack, which helps recover recently deleted or inserted records.

---

## Objectives of the Project
- To implement **Stack data structure** in a real-world application  
- To understand **LIFO behavior** through insertion and deletion  
- To provide **Undo functionality** using stack operations  
- To practice **modular programming** in C++  
- To enhance understanding of **file handling and memory management**

---

## Why Stack Data Structure?
The stack is selected because:
- It follows **LIFO (Last In, First Out)** principle
- Insert (push) and delete (pop) operations have **O(1) time complexity**
- Undo functionality can be easily implemented
- No shifting of elements is required (unlike arrays)

---

## 🛠️ Technologies Used
- **Programming Language:** C++
- **IDE/Compiler:** VS Code / Dev C++
- **Libraries Used:**
  - `<iostream>` – input/output
  - `<conio.h>` – `getch()`
  - `<windows.h>` – delay & screen control
  - `<string>` – string handling
  - `<fstream>` – file handling

---

## 🗂️ Data Structures Used

### 1️⃣ Student Structure
Stores individual student data:
- Name
- ID
- Qualification
- Contact Number
- Roll Number

### 2️⃣ Action Structure (Undo Stack)
Stores:
- Student record
- Operation type (`insert` or `delete`)

---

## ⚙️ Core Functionalities

### 🔹 Insert Student Record
- Adds a new student at the **top of the stack**
- Saves the operation in the **undo stack**

### 🔹 Show Student Records
- Displays all students
- Records are shown from **most recent to oldest**

### 🔹 Search Student
- Searches student using **Student ID**
- Displays complete student details if found

### 🔹 Delete Student Record
- Deletes the **most recently added student**
- Stores deletion in undo stack

### 🔹 Count Students
- Displays total number of student records

### 🔹 Undo Operation
- Reverts the **last insert or delete operation**
- Uses a separate undo stack

### 🔹 File Handling
- Stores all student records in a file (`items.file`)
- Ensures **persistent storage**

### 🔹 Exit
- Safely terminates the program

---

## 🔄 Undo Mechanism (Important Feature)
The undo feature is implemented using:
- A separate stack (`undoStack`)
- Each insert or delete operation is saved
- Undo restores or removes data based on last action

This makes the system **safe and user-friendly**.

---

## 📊 Time & Space Complexity

| Operation | Time Complexity |
|---------|----------------|
| Insert (Push) | O(1) |
| Delete (Pop) | O(1) |
| Search | O(n) |
| Undo | O(1) |
| Display | O(n) |

- **Space Complexity:** O(n)

---

## 🚀 How to Run the Project
1. Clone the repository
   ```bash
   git clone https://github.com/your-username/student-management-system-stack.git
   
2. Open the project in VS Code

3. Compile the program
   ```bash
   g++ main.cpp -o project
      ```
  4. Run the executable
       ```bash
     ./project

        ```
⚠️ This project is Windows-based due to windows.h


📈 Advantages

Simple and easy to use

Efficient undo functionality

Demonstrates real DSA concepts

File handling for data persistence

⚠️ Limitations

Console-based UI

Windows-only compatibility

No database integration

Fixed stack size

Beginner-friendly implementation
