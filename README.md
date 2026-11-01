*This project has been created as part of the 42 curriculum by rghomari.*

# Libft

## Description

**Libft** is a static library written in C as part of the 42 curriculum. Its goal is to recreate useful standard C library functions and develop additional tools for working with strings, memory, file descriptors, and linked lists.

The project builds `libft.a`, a reusable library that can be linked with other C programs. It contains **43 functions** organized into three parts:

- **Part 1 — Libc functions:** 23 reimplementations of standard C functions.
- **Part 2 — Additional functions:** 11 functions for string processing, conversion, and output.
- **Part 3 — Linked lists:** 9 functions for creating, traversing, modifying, and freeing singly linked lists.

The project focuses on pointer manipulation, memory allocation, correct handling of edge cases, and building a library with a Makefile.

## Library Description

### Part 1 — Libc functions (23)

These functions reproduce the behavior of their corresponding C library functions, under the requirements of the subject.

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphabetic or numeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_strlen` | Returns the length of a string, excluding its terminating null byte. |
| `ft_memset` | Fills a memory region with a given byte value. |
| `ft_bzero` | Sets a memory region to zero. |
| `ft_memcpy` | Copies a specified number of bytes between non-overlapping memory regions. |
| `ft_memmove` | Copies bytes safely when source and destination regions overlap. |
| `ft_strlcpy` | Copies a string into a size-limited buffer and returns the source length. |
| `ft_strlcat` | Appends a string to a size-limited buffer and returns the attempted total length. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of bytes. |
| `ft_memchr` | Searches for a byte within a specified memory region. |
| `ft_memcmp` | Compares two memory regions byte by byte. |
| `ft_strnstr` | Searches for a substring within a length-limited region of a string. |
| `ft_atoi` | Converts the initial numeric portion of a string to an integer. |
| `ft_calloc` | Allocates and zero-initializes memory for an array. |
| `ft_strdup` | Allocates a duplicate of a string. |

### Part 2 — Additional functions (11)

| Function | Description |
| --- | --- |
| `ft_substr` | Allocates a substring starting at a given index, with a maximum length. |
| `ft_strjoin` | Allocates a new string by concatenating two strings. |
| `ft_strtrim` | Allocates a copy of a string with specified characters removed from both ends. |
| `ft_split` | Splits a string at a delimiter into a dynamically allocated, null-terminated array of strings. |
| `ft_itoa` | Allocates the string representation of an integer. |
| `ft_strmapi` | Applies a function to each character and returns a new string. |
| `ft_striteri` | Applies a function to each character by address, allowing in-place modification. |
| `ft_putchar_fd` | Writes one character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 — Linked lists (9)

The linked-list functions operate on the `t_list` structure declared in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node stores a `void *` content pointer and a pointer to the next node. The last node points to `NULL`.

| Function | Description |
| --- | --- |
| `ft_lstnew` | Allocates a new node containing a supplied content pointer. |
| `ft_lstadd_front` | Inserts a node at the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Appends a node to the end of a list. |
| `ft_lstdelone` | Deletes one node, using a callback to free its content. |
| `ft_lstclear` | Deletes a node and all following nodes, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a callback to the content of each node. |
| `ft_lstmap` | Builds a new list from the results of applying a callback to each node's content. |

### Memory management

Functions that allocate new strings or arrays return memory that the caller must eventually free. In particular, each string returned by `ft_split` must be freed before freeing the array itself.

For linked lists, `ft_lstnew` allocates a node but does not copy or allocate its supplied content. Functions such as `ft_lstdelone` and `ft_lstclear` use a caller-provided `del` callback to release content appropriately. When `ft_lstmap` creates a new list, it uses `del` for cleanup if an allocation fails.

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar` (for creating the static library)

### Compilation

From the root of the repository, run:

```sh
make
```

This compiles the source files with `-Wall -Wextra -Werror` and produces **`libft.a`** in the repository root.

Other available Makefile commands:

| Command | Action |
| --- | --- |
| `make` or `make all` | Builds `libft.a`. |
| `make clean` | Removes generated object (`.o`) files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Rebuilds the library from scratch. |

### Using the library

Include `libft.h` in your C program and link against `libft.a`.

Example (`example.c`):

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *message;

    message = ft_strjoin("Hello, ", "42!");
    if (message == NULL)
        return (1);
    printf("%s\n", message);
    free(message);
    return (0);
}
```

Compile and run it from the repository root:

```sh
cc -Wall -Wextra -Werror example.c -I. -L. -lft -o example
./example
```

Expected output:

```text
Hello, 42!
```

The example program is only for demonstration and is not one of the project submission files.

## Resources

### References

- [Linux man-pages](https://man7.org/linux/man-pages/) — reference documentation for libc functions, memory allocation, and system calls (including `write`).
- [The GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — reference for C library behavior and string/memory functions.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — Makefile targets, dependencies, and build rules.
- [GNU Binutils: `ar`](https://sourceware.org/binutils/docs/binutils/ar.html) — creating and managing static-library archives.
- The **Libft subject, version 19.3** — requirements, prototypes, and authorized functions.

### AI usage

**ChatGPT (OpenAI)** was used as a learning and development aid while working through the three parts of Libft. Its use included explaining C pointers, memory allocation, string and memory manipulation, and linked lists; discussing function implementations and edge cases; helping reason about bugs and cleanup paths; and suggesting test examples. It was also used to discuss the Makefile and to draft this README.

AI-assisted suggestions should be understood and independently checked against the subject, compiler warnings, and local tests before submission.