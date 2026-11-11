*This project has been created as part of the 42 curriculum by ael-asso.*

## Description

Libft is a custom C library that recreates several standard C functions and adds other useful functions.

The goal of this project is to understand how these functions work internally and to practice memory management, string manipulation, and linked lists.

## Library Contents

The library contains three parts:

**Part 1 – Libc functions**

Reimplementations of standard C functions, including character checks, memory manipulation, string manipulation, and conversion functions.

**Part 2 – Additional functions**

Functions for creating and manipulating strings, converting integers to strings, applying functions to characters, and writing data to file descriptors.

**Part 3 – Linked lists**

Functions for creating, adding, counting, deleting, iterating over, and mapping linked-list nodes.

The library contains 43 functions in total.

## Instructions

To compile the library, run:

```bash
make
```

This creates the `libft.a` static library.

Other Makefile commands:

```bash
make clean
```
Removes the object files.

```bash
make fclean
```
Removes the object files and the library.

```bash
make re
```
Recompiles the library from scratch.

To use the library, include `libft.h` in your C file and link `libft.a` when compiling.

## Resources

- The official 42 Libft subject (version 19.3).
- C manual pages (`man`).
- [cppreference](https://en.cppreference.com/w/c)
- [Learn-C](https://www.learn-c.org/)
- Norminette documentation.

**AI Usage**

AI was used to help understand C concepts, discuss edge cases, review function implementations, and understand testing and debugging. It was also used to clarify topics such as pointers, memory management, and linked lists.