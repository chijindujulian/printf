#include "main.h"

/**
 * _print_string - prints a string
 * @str: string to print
 *
 * Return: Count on succes, -1 on NULL
*/
int _print_string(char *str)
{
	int counter = 0;

    if (str == NULL)
    {
        return (-1);
    }

	while (*str != '\0')
	{
		_putchar(*str);
		counter++;
		str++;
	}

	return (counter);
}