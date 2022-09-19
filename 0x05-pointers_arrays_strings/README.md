C - Pointers, arrays and strings

In this project, I learned about



What are pointers and how to use them

What are arrays and how to use them

What are the differences between pointers and arrays

How to use strings and how to manipulate them

Scope of variables

Helper File

_putchar.c: C function that writes a character to stdout.

Header File 📁

main.h: Header file containing prototypes for all functions written in the project.

FilePrototype

0-reset_to_98.cvoid reset_to_98(int *n);

1-swap.cvoid swap_int(int *a, int *b);

2-strlen.cint _strlen(char *s);

3-puts.cvoid _puts(char *str);

4-print_rev.cvoid print_rev(char *s);

5-rev_string.cvoid rev_string(char *s);

6-puts2.cvoid puts2(char *str);

7-puts_half.cvoid puts_half(char *str);

8-print_array.cvoid print_array(int *a, int n);

9-strcpy.cchar *_strcpy(char *dest, char *src);

100-atoi.cint _atoi(char *s);

Tasks 📃

0. Function that takes a pointer to an int as a parameter and updates the value it points



0-reset_to_98.c: C function that takes a pointer to an int as a parameter and updates the value it points to 98.

1. Function that swaps the value of two integers



1-swap.c: C function that swaps the value of two integers.

2. Function that returns the length of a string



2-strlen.c: C function that returns the length of a string.

3. Function that prints a string



3-puts.c: C function that prints a string, followed by a new line, to stdout.

4. Function that prints a string, in reverse



4-print_rev.c: C function that prints a string, in reverse, followed by a new line.

5. Function that reverses a string



5-rev_string.c: C function that reverses a string.

6. Function that prints every other character of a string



6-puts2.c: C function that prints every other character of a string, followed by a new line.

7. Function that prints the second half of a string



7-puts_half.c: C function that prints the second half of a string, followed by a new line.

8. Arrrays



8-print_array.c: C function that prints an input n elements of an array of integers, followed by a new line.

Numbers are separated by a comma followed by a space.

Numbers are displayed in the same order as they are stored in the array.

9. strcpy



9-strcpy.c: C function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Returns the pointer to dest.

10. Function that converts a string to an integer without using long, new variable arrays, or hard-coded special values



100-atoi.c: C function that converts a string to an integer without using long, new variable arrays, or hard-coded special values, as follows:

The number in the string can be preceded by an infinite number of characters.

Takes into account all + and - signs before the number.

If there are no numbers in the string, the function returns 0.
