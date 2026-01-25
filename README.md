*This project has been created as part of the 42 curriculum by essimsek.*

## Description

**libft** is a custom C library that re-implements essential functions from the standard C library (`libc`), along with additional utility functions commonly used in C programming. The goal of this project is to gain a deep understanding of how fundamental C functions work under the hood by coding them from scratch.

This library serves as the foundation for future 42 projects, providing a reliable and tested set of tools for string manipulation, memory management, linked list operations, and more.

## Library Overview

### Part 1 - Libc Functions

These functions replicate the behavior of their standard library counterparts:

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit (0-9) |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Calculates the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets all bytes in a memory area to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlapping) |
| `ft_strlcpy` | Copies string with size limitation |
| `ft_strlcat` | Concatenates strings with size limitation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Locates byte in memory area |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string with length limit |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates and zeros memory |
| `ft_strdup` | Duplicates a string |

### Part 2 - Additional Functions

Custom utility functions not found in the standard library:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims specified characters from beginning and end |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character with its index |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string with newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 - Linked List Functions

Functions for manipulating singly linked lists using `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Requirements

- GCC compiler
- Make
- Unix-based operating system (Linux/macOS)

### Compilation

Clone the repository and compile the library:

```bash
git clone <repository-url> libft
cd libft
make
```

This will generate the `libft.a` static library file.

### Available Make Commands

| Command | Description |
|---------|-------------|
| `make` or `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Recompiles the library from scratch |

### Usage

To use libft in your project:

1. Include the header file in your source code:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
   ```

## Resources

### Documentation & References

- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C reference book
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) - Official libc documentation
- [man7.org](https://man7.org/linux/man-pages/) - Linux manual pages
- [cppreference.com - C Reference](https://en.cppreference.com/w/c) - Detailed C function documentation

### 42 Specific

- [42 Cursus Subject](https://projects.intra.42.fr) - Official project documentation

### AI Usage

AI tools were **not** used in the development of this project. All functions were implemented manually based on standard library documentation and the project requirements.

---

**Author:** essimsek @ 42 Istanbul