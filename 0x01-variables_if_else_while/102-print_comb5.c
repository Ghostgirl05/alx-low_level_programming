#include <stdio.h>

/**
 *main - Prints all combinations of two two digits with,
 * and space followed by new line
 *
 *Return: returns 0
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 56 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
