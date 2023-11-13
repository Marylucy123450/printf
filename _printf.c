#include "main.h"

/**
 *_printf - A personalized version of printf for printing formatted output.
 *@format: The string with format instructions.
 *@...: Additional arguments for formatting and printing.
 *
 * Return: Count of printed characters (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = parse_format(format, args);
	va_end(args);

	return (count);
}


