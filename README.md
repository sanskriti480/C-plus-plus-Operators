# Experiment 3: Operators in C++

## 🧪 Aim
To study and implement the use of **relational** and **logical operators** in C++ along with conditional statements (`if`, `if-else`, `else-if`) to perform decision-based operations.

---

## Tools used
- Visual Studio Code (VS Code) / Programiz Online C++ Compiler 

---

## Theory

## Why C++ is More Efficient Than C

- **Object-Oriented Programming:**  
  C++ supports classes and objects, making code more modular and reusable compared to the procedural approach in C.

- **Function Overloading and Default Arguments:**  
  Enhances code flexibility and reduces repetition.

- **Standard Template Library (STL):**  
  Offers pre-built data structures and algorithms that save time and improve performance.

- **Better Type Checking:**  
  Reduces the risk of logical errors by catching mismatches at compile time.

- **Memory Management Tools:**  
  C++ provides `new` and `delete` for controlled memory management, compared to C's `malloc()` and `free()`.

- **Namespaces and Exception Handling:**  
  Enable better code organization and error control.


In C++, **operators** are special symbols used to perform operations on variables and values. This experiment focuses specifically on **relational** and **logical operators**, both of which are essential for implementing decision-making in programs using conditional statements like `if`, `else`, and `else-if`.

### Relational Operators
Used to compare two values. They return a boolean result (`true` or `false`).

- `==` : Equal to  
- `!=` : Not equal to  
- `>`  : Greater than  
- `<`  : Less than  
- `>=` : Greater than or equal to  
- `<=` : Less than or equal to  

### Logical Operators
Used to combine two or more conditions.

- `&&` : Logical AND  
- `||` : Logical OR  
- `!`  : Logical NOT  

### Key Concepts Demonstrated in This Experiment:

- Use of conditional statements to make decisions based on user input.
- Combining relational and logical operators to form complex conditions.
- Real-world applications such as:
  - Determining if a number is positive or negative
  - Assigning grades based on marks
  - Finding the quadrant of a point in a coordinate system

---

## Program Descriptions

### Program 1: Check Positive or Negative

This program takes two numbers as input and uses conditional statements to check whether each number is **positive** or **negative**.

#### Concepts Demonstrated:
- Input using `cin`
- Use of relational operators (`>`)
- Use of `if-else` conditions
- Independent evaluation of multiple variables

#### Use Case:
Ideal for understanding **comparison** logic and output based on individual conditions.

---

### Program 2: Student Grading System

This program asks the user to enter marks out of 100 and displays a grade based on predefined ranges using `if-else-if` ladder.

#### Grading Criteria:
- 90 to 100: Grade A+  
- 80 to 89: Grade A  
- 70 to 79: Grade B  
- 60 to 69: Grade C  
- 50 to 59: Grade D  
- Below 50: Fail  

#### Concepts Demonstrated:
- Range checking using relational operators
- Use of logical operators for combining ranges
- Use of `else-if` ladder for multi-branch decisions

---

### Program 3: Quadrant Checker

This program takes x and y coordinates as input and determines the quadrant in which the point lies on the Cartesian plane.

#### Quadrant Rules:
- x > 0 and y > 0 → Quadrant I  
- x < 0 and y > 0 → Quadrant II  
- x < 0 and y < 0 → Quadrant III  
- x > 0 and y < 0 → Quadrant IV  

#### Concepts Demonstrated:
- Logical `AND` operator (`&&`)
- Relational conditions on multiple variables
- Conditional branching using `if-else-if`

---

### Sample output

Program 1
The variable x is: 4
The variable y is: -8
x is a positive integer.
y is a negative integer.

Program 2
Enter the marks out of 100: 99
Your grade is A+.

Program 3
Enter the value of x: 4
Enter the value of y: -8
4th Quadrant.

## Conclusion

In this experiment, we successfully:

- Applied relational and logical operators in practical C++ programs.
- Implemented conditional logic using `if`, `else`, and `else-if` statements.
- Developed real-life logic scenarios (grades, sign check, quadrant determination).
- Strengthened our understanding of operator precedence and condition evaluation.

This experiment is essential for mastering decision control statements and logical condition building in C++.

---
