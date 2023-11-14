#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int parse_format(const char *format, va_list args);

#endif /* MAIN_H */
