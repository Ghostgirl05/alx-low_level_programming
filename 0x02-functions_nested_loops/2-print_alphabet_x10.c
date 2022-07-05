#include "main.h"

/**
 * prints_alphabet_x10 - Make alphabet x10 times
 * print_alphabet_x10.c - prints lower case alphabets
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
