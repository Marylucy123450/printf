#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");

	/* Test _printf for string length */
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len2, len2);

	/* Test _printf for negative integers */
	_printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%d]\n", -762534);

	/* ... other test cases ... */

<<<<<<< HEAD
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
   /* _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n"); */
    return (0);
=======
	return (0);
>>>>>>> 6ea1048ed6441773a957dc5d5cdf8454247b3f48
}
