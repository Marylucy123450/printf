#include "main.h"

/**
 * parse_format - Parses the format string and processes conversion specifiers.
 * @format: The format string containing conversion specifiers.
 * @args: The variable arguments to be formatted and printed.
 *
 * Return: The number of characters printed.
 */
int parse_format(const char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_string(args);
				break;
			case 'd':
			case 'i':
				count += print_int(args);
				break;
			case '%':
				write(1, "%", 1);
				count++;
				break;
			default:
				write(1, format - 1, 2);
				count += 2;
				break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

	return (count);
}
