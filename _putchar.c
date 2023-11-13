#include "main.h"

/**
 * _putchar - writes the character c to the output screen
 * @c: The character to print
 *
 * Return: On success 1.
 * If there is  error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
