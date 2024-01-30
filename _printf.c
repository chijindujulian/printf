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

/**
 * main - entry point of the program
 *
 *
 * Return: Always 0
 */

int main(void)
{
    printf("Hello world\n");
    printf("A character %c\n", 'j');
    printf("A string %s\n", "hello");
    printf("An integer %d\n", 12);
    printf("A negative integer %d\n\n", -12);

    printf("A line\n\n");

    _printf("Hello world\n");
    _printf("A character %c\n", 'j');
    _printf("A string %s\n", "hello");
    _printf("An integer %d\n", 12);
    _printf("A negative integer %d\n", -12);

    return (0);
}