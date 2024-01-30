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

    if (format == NULL)
    {
        return (-1);
    }
    
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
            else
            {
                _putchar('%');
				_putchar(*format);
				counter += 2;
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

    printf("Wah gwaan\n");
    printf("An integer man %d\n", -12);
    printf("A string bredda %s\n", "Bredda");
    printf("That one ah character bredda %c\n\n", 's');

    _printf("Wah gwaan\n");
    _printf("An integer man %d\n", -32);
    _printf("A string bredda %s\n", "Bredda");
    _printf("That one ah %c character bredda %c\n", 's', 'f');

    return (0);
}
