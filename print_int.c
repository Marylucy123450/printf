#include "main.h"

/**
 * print_int - Prints an integer to standard output.
 * @args: The va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int num_copy = num;
	int digit_count = (num == 0) ? 1 : 0;
	int count;
	int i;

	char digits[10];

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}

	while (num_copy != 0)
	{
		num_copy /= 10;
		digit_count++;
	}

	count = digit_count;

	for (i = digit_count - 1; i >= 0; i--)
	{
		int digit = num % 10;

		digits[i] = digit + '0';
		num /= 10;
	}

	write(1, digits, digit_count);
	return (count);
}
