*This project has been created as part of the 42 curriculum by your_login.*

# Libft

## Description

Libft is a project from the 42 curriculum. Its goal is to recreate a collection of standard C library functions and develop additional utility functions.

This project helps improve my understanding of C programming, pointers, memory allocation, string manipulation, and linked lists.

The library includes functions for:
- Character checking and conversion.
- String manipulation.
- Memory manipulation.
- Conversion between strings and integers.
- Linked list creation, iteration, and memory management.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This generates the `libft.a` static library.

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile the project:

```bash
make re
```

### Usage

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

Make sure that `main.c` and `libft.h` are accessible from your current directory, and that `libft.a` has been compiled.

## Resources

### Documentation and references

- [C Programming Language — cppreference](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/)
- [GNU Compiler Collection (GCC) documentation](https://gcc.gnu.org/onlinedocs/)
- The official 42 Libft project subject.

### AI usage

AI tools were used as learning assistants during the development of this project.

They helped explain C functions, pointers, memory allocation, string manipulation, and linked lists. AI was also used to clarify compilation errors, discuss debugging techniques, and provide examples to support understanding.

The implementation, testing, and validation of the functions remain the responsibility of the student. All AI-assisted code and explanations should be reviewed and understood before submission.

## Author

- eqabbal
