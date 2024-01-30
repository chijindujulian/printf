#include "main.h"

/**
 * _print_string - prints a string
 * @str: string to print
 *
 * Return: Always 0
*/
int _print_string(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		counter++;
		str++;
	}

	return (counter);
}