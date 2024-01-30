#include "main.h"

/**
 * _printf - take a string of characters and process args if any
 * @format: character string to analyze
 * @...: variable number of arguments
 *
 * Return: A processed string
 */

int _printf(char *format, ...)
{
    int counter = 0;

    va_list args;

    va_start(args, format);
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char s = va_arg(args, int);

                _putchar(s);
                counter++;
            }
            else if (*format == 'd' || *format == 'i')
			{
				int i = va_arg(args, int);

				counter += _print_int(i);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				counter += _print_string(str);
			}
        }
        else
        {
            _putchar(*format);
            counter++;
        }
        format++;
    }
    va_end(args);
    return (counter);
}

