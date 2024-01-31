#include "main.h"

/**
 * _printf - process a string and variable number of arguments
 * @format: the string to process
 * @...: variable number of arguments
 *
 * Return: 0
 */

int _printf(const char *format, ...)
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

				counter += _putchar(s);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				counter += _print_string(str);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int i = va_arg(args, int);

				counter += _print_int(i);
			}
			else if (*format == '%')
			{
				_putchar('%');
				counter++;
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
