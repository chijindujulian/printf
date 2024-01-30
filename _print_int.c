#include "main.h"

/**
 * _print_int - prints an integer
 * @num: string to print
 *
 * Return: Always 0
*/

int _print_int(int num)
{
	int counter = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		counter++;
	}

	if (num / 10 != 0)
	{
		counter += _print_int(num / 10);
	}

	_putchar(num % 10 + '0');
	counter++;

	return (counter);
}
