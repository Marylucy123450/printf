#include "main.h"

/**
 * print_char - Outputs a character to the standard output.
 * @args: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed (always 1).
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
