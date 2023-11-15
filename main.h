#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int printf_string(va_list value);
int print_int(va_list args);
int parse_format(const char *format, va_list args);
int printf_HEXDEC(va_list value);
#endif /* MAIN_H */
