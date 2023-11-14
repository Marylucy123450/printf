#include "main.h"
/**
 * printf_string - prints a string.
 * @val: argument passed.
 * Return: the length of the string.
 */

int printf_string(va_list value)
{
	char *s;
	int i, length;

	s = va_arg(value, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
	else
	{
		length  = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
}
