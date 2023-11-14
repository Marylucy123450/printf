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

	return (0);
}
