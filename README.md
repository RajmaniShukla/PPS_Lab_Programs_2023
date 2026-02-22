# PPS Lab Programs 2023

📚 **Programming for Problem Solving (PPS) Lab** - A collection of C programs covering fundamental programming concepts.

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Programs](https://img.shields.io/badge/Programs-27-green.svg)](#program-index)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## 📖 About

This repository contains C programs from the **PPS (Programming for Problem Solving) Lab course** (2023). These programs demonstrate core programming concepts including:

- Variables and Data Types
- Control Structures (if-else, switch)
- Loops (for, while)
- Arrays (1D and 2D)
- Functions and Mathematical Operations
- Number Systems and Conversions

## 🚀 Getting Started

### Prerequisites

- GCC Compiler (recommended) or any C compiler
- For Windows (with Turbo C compatibility): Use DOSBox or update `conio.h` functions

### Compilation

```bash
# Using GCC (Linux/macOS)
gcc -o program P1.C -lm

# Run the program
./program
```

### Note on `conio.h`

These programs use `conio.h` (Turbo C library). For modern compilers:
- **Linux/macOS**: Comment out `#include <conio.h>`, `getch()`, and `clrscr()`
- **Or** use `ncurses` library as an alternative

## 📋 Program Index

| # | File | Description | Topics |
|---|------|-------------|--------|
| 1 | `P1.C` | Calculate percentage from 5 subject marks | Arrays, Loops, I/O |
| 2 | `P2.C` | Area calculations (uses math.h) | Math functions |
| 3 | `P3.C` | Circle area and circumference | Mathematical formulas |
| 4 | `P4.C` | Temperature conversion (C to F) | Arithmetic operations |
| 5 | `P5.C` | Swap two numbers using temp variable | Variable manipulation |
| 6 | `P6.C` | Find greater of two numbers | Conditional statements |
| 7 | `P7.C` | Find greatest of three numbers | Nested if-else |
| 8 | `P8.C` | Check odd or even number | Modulus operator |
| 9 | `P9.C` | Check leap year | Logical operators |
| 10 | `P10.C` | Grade calculation from marks | If-else ladder |
| 11 | `P11.C` | Simple calculator (+, -, *, /) | Switch case |
| 12 | `P12.C` | Factorial of a number | Loops |
| 13 | `P13.C` | Check prime number | Nested loops |
| 14 | `P14.C` | Sum of odd and even numbers up to N | Ternary operator |
| 15 | `P15.C` | Fibonacci series | Series generation |
| 16 | `P16.C` | Print numbers 1 to N | For loop |
| 17 | `P17.C` | Reverse a number | While loop, digits |
| 18 | `P18.C` | Check palindrome number | Number manipulation |
| 19 | `P19.C` | Armstrong numbers (1-100) | Nested loops, pow() |
| 20 | `P20.C` | Decimal ↔ Binary conversion | Number systems |
| 21 | `P21.C` | Sum of array elements | 1D Arrays |
| 22 | `P22.C` | Merge two arrays | Array operations |
| 23 | `P23.C` | Sort array (ascending) | Sorting algorithms |
| 24 | `P24.C` | Linear search in array | Searching |
| 25 | `P25.C` | Find largest element in array | Array traversal |
| 26 | `P26.C` | Matrix addition and multiplication | 2D Arrays |
| 27 | `P27.C` | Matrix transpose | Matrix operations |
| 30 | `P30.C` | Function demo with parameters | Functions |

## 📚 Topics Covered

### 1. Basic I/O Operations
- `printf()` and `scanf()` functions
- Format specifiers (`%d`, `%f`, `%c`, etc.)

### 2. Control Structures
- **Decision Making**: if-else, nested if-else, switch-case
- **Loops**: for, while, do-while
- **Jump Statements**: break, continue

### 3. Arrays
- **1D Arrays**: Declaration, initialization, traversal
- **2D Arrays**: Matrix operations
- **Array Algorithms**: Sorting, searching, merging

### 4. Functions
- Function declaration and definition
- Parameter passing
- Return values

### 5. Mathematical Concepts
- Factorial, Fibonacci series
- Prime numbers, Armstrong numbers
- Number system conversions

## 🗂️ File Structure

```
PPS_Lab_Programs_2023/
├── README.md           # This file
├── .gitignore          # Git ignore rules
├── P1.C - P27.C        # Lab programs
└── P30.C               # Function demo
```

## 💡 Tips for Beginners

1. **Start from P1**: Programs are arranged in increasing complexity
2. **Understand before copying**: Read the logic, don't just run
3. **Modify and experiment**: Change inputs, add features
4. **Use comments**: Add your own notes to the code

## 🔧 Modernizing the Code

To run on modern systems without `conio.h`:

```c
// Replace this:
#include <conio.h>
getch();
clrscr();

// With this:
#include <stdlib.h>
getchar();        // Instead of getch()
system("clear");  // Instead of clrscr() (Linux/macOS)
// system("cls"); // For Windows
```

## 📜 License

This project is open source and available under the [MIT License](LICENSE).

## 👤 Author

**Rajmani Shukla**

- GitHub: [@RajmaniShukla](https://github.com/RajmaniShukla)

---

⭐ If this helped you, please give it a star!
