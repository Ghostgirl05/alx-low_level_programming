#include "main.h"

/**
 * print_sign - Determines whether an integer is positive, negative or zero
 * Description: prints sign of a number
 * @n: carrier variable
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
