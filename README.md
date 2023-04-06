# libft.a

The libft.a library is a collection of functions that you can use as a useful tool for your cursus. It contains functions that are similar to the ones available in the standard C library as well as some custom ones. You can use this library in any C project that you work on.

## Getting Started

To get started with the libft.a library, you need to have the following files in your project directory:

- `libft.h`: header file containing function prototypes and macro definitions
- `libft.a`: static library file containing compiled object code of the library functions
- `ft_*.c`: source files containing the implementation of the library functions

You can compile the `libft.a` library by running the `make` command in the project directory. This will generate the `libft.a` file that you can link to your project.

## Makefile

The Makefile included in the project provides the following targets:

- `all`: compiles the library
- `clean`: removes object files
- `fclean`: removes object files and the library file
- `re`: removes object files and the library file, then compiles the library again

You can run these targets by typing `make` followed by the target name in the terminal.

## Library Functions

The `libft.a` library contains the following functions:

- `ft_memset`: sets a memory area to a specific value
- `ft_bzero`: sets a memory area to zero
- `ft_memcpy`: copies a memory area from source to destination
- `ft_memccpy`: copies a memory area from source to destination until a specific character is found
- `ft_memmove`: copies a memory area from source to destination, handling overlapping areas
- `ft_memchr`: searches for a specific character in a memory area
- `ft_memcmp`: compares two memory areas
- `ft_strlen`: calculates the length of a string
- `ft_strlcpy`: copies a string to a destination buffer, with a specified maximum size
- `ft_strlcat`: appends a string to a destination buffer, with a specified maximum size
- `ft_strchr`: searches for a specific character in a string
- `ft_strrchr`: searches for a specific character in a string, starting from the end
- `ft_strnstr`: searches for a substring in a string, with a specified maximum length
- `ft_strncmp`: compares two strings, up to a specified maximum length
- `ft_atoi`: converts a string to an integer
- `ft_isalpha`: checks if a character is an alphabetic character
- `ft_isdigit`: checks if a character is a digit
- `ft_isalnum`: checks if a character is an alphabetic or a digit
- `ft_isascii`: checks if a character is a valid ASCII character
- `ft_isprint`: checks if a character is a printable character
- `ft_toupper`: converts a character to uppercase
- `ft_tolower`: converts a character to lowercase
- `ft_calloc`: allocates memory for an array and initializes it to zero
- `ft_strdup`: duplicates a string

## External Functions

The `libft.a` library does not use any external functions, except for those specified in the project instructions.

## License

This project is licensed under the terms of the MIT license.
