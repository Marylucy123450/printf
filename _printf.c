#include <stdarg.h>  /* For handling variadic arguments*/
#include <stdio.h>   /* For standard input/output*/

int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);

#define BUFF_SIZE 1024

int _printf(const char *format, ...)
{
    va_list args;      /* Declare a variable to hold the list of arguments*/
    int count = 0;     /* Initialize a counter for the number of characters printed*/
    int printed = 0;   /* Number of characters printed by each conversion specifier*/
    int buff_ind = 0;  /* Buffer index*/
    char buffer[BUFF_SIZE];

    va_start(args, format); /* Initialize the argument list*/

    while (*format) /* Iterate over each character in the format string*/
    {
        if (*format == '%') /* Check for the start of a conversion specifier*/
        {
            format++; /* Move to the next character after '%'*/

            if (*format == '%') /* Case: '%%' prints a single '%'*/
            {
                buffer[buff_ind++] = '%';
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
            else if (*format == 'c') /* Case: '%c' prints a character*/
            {
                int ch = va_arg(args, int); /* Fetch the next argument as int*/
                buffer[buff_ind++] = ch;
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
            else if (*format == 's') /* Case: '%s' prints a string*/
            {
                char *str = va_arg(args, char *); /* Fetch the next argument as char*/
                while (*str) /* Iterate over each character in the string*/
                {
                    buffer[buff_ind++] = *str;
                    str++;
                    if (buff_ind == BUFF_SIZE)
                    {
                        print_buffer(buffer, &buff_ind);
                        count += buff_ind;
                    }
                }
            }
            else if (*format == 'd' || *format == 'i') /* Case: '%d' or '%i' prints an integer*/
            {
                int value = va_arg(args, int);
                printed = print_integer(value);/*calling print_int function*/
                count += printed;
            }
        }
        else /* Case: Regular character, not a conversion specifier*/
        {
            buffer[buff_ind++] = *format;
            if (buff_ind == BUFF_SIZE)
            {
                print_buffer(buffer, &buff_ind);
                count += buff_ind;
            }
        }

        format++; /* Move to the next character in the format string*/
    }

    print_buffer(buffer, &buff_ind);
    count += buff_ind;

    va_end(args); /* Clean up the argument list*/

    return count; /* Return the number of characters printed*/
}

int print_integer(int value)
{
	int i = 0, j;
   	char buffer[32]; /* Buffer to store the string representation*/
    	int printed = 0; /* Counter for the number of characters printed*/

    	/* Handle the case of negative numbers*/
    	if (value < 0)
    	{
        	putchar('-');
        	printed++;
        	value = -value;
    	}

    	/* Convert each digit of the integer to a character*/
    	do
    	{
        	buffer[i++] = '0' + (value % 10);
        	value /= 10;
        	printed++;
    	} while (value > 0);

    	/* Print the characters in reverse order to get the correct representation*/
   	for (j = i - 1; j >= 0; j--)
    	{
        	putchar(buffer[j]);
    	}

    return printed;
}

void print_buffer(char buffer[], int *buff_ind)
{
	int i;
    	if (*buff_ind > 0)
    	{
        for (i = 0; i < *buff_ind; i++)
        {
            putchar(buffer[i]);
        }
    }

    *buff_ind = 0;
}
