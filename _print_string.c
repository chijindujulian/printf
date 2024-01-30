#include "main.h"

/**
 * _print_string - print a string
 * @str: string to print
 *
 * Return: Always 0
 */

int _print_string(char *str)
{
	int counter;

	if (str == NULL)
	{
		return (-1);
	}

	for (counter = 0; *str != '\0'; counter++)
	{
		_putchar(*str);
		str++;
	}

	return (counter);
}
