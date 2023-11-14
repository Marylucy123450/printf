#include "main.h"

/**
 * print_string - Prints a string to standard output.
 * @args: The va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s)
	{
		int count = 0;

		while (*s)
		{
			write(1, s, 1);
			s++;
			count++;
		}
		return (count);
	}
	return (0);
}
