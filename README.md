*This project has been created as part of the 42 curriculum by garodri2*

# Libft

## Description

The **Libft** project consists of creating a personal C library by reimplementing functions from the standard C library (libc), along with additional utility functions and linked list manipulation tools.

The goal is to understand how these functions work internally and build a reusable library that will be used across the 42 curriculum.

This project focuses on:
- Character manipulation
- String manipulation
- Memory manipulation
- Dynamic memory allocation
- Linked list handling

## Library Structure

The library is divided into three main parts:

### 1. Libc Functions

#### Character checks

```txt
ft_isalpha    -> Checks if a character is a letter (A-Z or a-z)
ft_isdigit    -> Checks if a character is a digit (0-9)
ft_isalnum    -> Checks if a character is alphanumeric
ft_isascii    -> Checks if a character belongs to the ASCII table
ft_isprint    -> Checks if a character is printable
```

#### String functions

```txt
ft_strlen     -> Returns the length of a string
ft_strlcpy    -> Copies a string with size limitation
ft_strlcat    -> Concatenates strings with size limitation
ft_strchr     -> Finds the first occurrence of a character
ft_strrchr    -> Finds the last occurrence of a character
ft_strncmp    -> Compares two strings up to n characters
ft_strnstr    -> Locates a substring inside another string
```

#### Memory functions

```txt
ft_memset     -> Fills memory with a constant byte
ft_bzero      -> Sets a memory area to zero
ft_memcpy     -> Copies a memory block
ft_memmove    -> Copies memory safely even with overlap
ft_memchr     -> Searches for a byte inside memory
ft_memcmp     -> Compares two memory areas
```

#### Conversion functions

```txt
ft_atoi       -> Converts a string into an integer
ft_toupper    -> Converts lowercase letters to uppercase
ft_tolower    -> Converts uppercase letters to lowercase
```

### 2. Additional Functions

#### String manipulation

```txt
ft_substr     -> Extracts a substring from a string
ft_strjoin    -> Joins two strings into a new one
ft_strtrim    -> Removes specified characters from a string
ft_split      -> Splits a string using a delimiter
ft_strdup     -> Duplicates a string into new memory
```

#### String iteration and mapping

```txt
ft_strmapi    -> Applies a function to each character of a string
ft_striteri   -> Iterates through a string applying a function
```

#### Output functions

```txt
ft_putchar_fd -> Writes a character to a file descriptor
ft_putstr_fd  -> Writes a string to a file descriptor
ft_putendl_fd -> Writes a string followed by a newline
ft_putnbr_fd  -> Writes an integer to a file descriptor
```

#### Conversion utilities

```txtThis project has been created as part
of the 42 curriculum b
ft_itoa       -> Converts an integer into a string
```

### 3. Linked List Functions

#### Structure operations

```txt
ft_lstnew        -> Creates a new list node
ft_lstadd_front  -> Adds a node at the beginning of a list
ft_lstadd_back   -> Adds a node at the end of a list
```

#### List information

```txt
ft_lstsize       -> Counts the number of nodes in a list
ft_lstlast       -> Returns the last node of a list
```

#### Deletion

```txt
ft_lstdelone     -> Deletes a single node
ft_lstclear      -> Deletes and frees an entire list
```

#### Iteration and mapping

```txt
ft_lstiter       -> Applies a function to each node
ft_lstmap        -> Creates a new list applying a function
```

## Instructions

To use the Libft library, you first need to compile the project. This is done by running the command `make`, which will build all source files and generate the static library file `libft.a`.

If you need to clean the project, you can use `make clean` to remove all object files generated during compilation. To completely reset the project, including the library file, use `make fclean`. After that, you can rebuild everything again with `make re`, which performs a full clean and recompilation in one step.

Once the library is compiled, you can include it in your project by adding `#include "libft.h"` in your source code. To compile your program with Libft, you need to link it using `-L.` and `-lft`, ensuring that the compiled `libft.a` is available.

## Resources

During the development of this project, several study resources and support tools were used to reinforce the understanding of C programming concepts and improve problem-solving skills.

One of the main academic references used was the University of São Paulo (USP) Algorithms and C Language material:
https://www.ime.usp.br/~pf/algoritmos/index.html#C-language

This resource was especially useful for revising fundamental concepts related to:
- Algorithms
- Pointers
- Memory manipulation
- Dynamic memory allocation
- Data structures
- C language syntax and logic

The Linux manual pages (`man`) were also frequently used to study the behavior, parameters, and expected output of standard C library functions. This helped ensure that the reimplemented functions behaved as closely as possible to the original libc implementations.

YouTube was used as a complementary learning platform, mainly for more detailed and visual explanations about topics such as linked lists, memory management, pointer manipulation, and debugging techniques.

Artificial Intelligence tools, specifically ChatGPT, were used as learning support during the development of the project. AI assisted with:
- Clarification of programming concepts
- Understanding edge cases in functions
- Reviewing logic and implementation approaches

In addition to online resources, collaboration with friends and colleagues also played an important role throughout the project. Discussions, code reviews, and shared problem-solving helped reinforce understanding and overcome difficulties during development.

## Notes

- All functions follow the 42 Norminette coding standard
- Memory allocation and deallocation were carefully handled
- The library was designed to be reusable across future projects