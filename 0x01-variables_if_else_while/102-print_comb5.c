#include <stdio.h>

/**
 *main - Prints all combinations of two two digits with,
 * and space followed by new line
 *
 *Return: returns 0
 */
int main(void)
{
	int n1 = 48, a = 0, b, com = 44;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + '48');
			putchar((a % 10) + '48');
			putchar((32));
			putchar((b / 10) + '48');
			putchar((b % 10) + '48');

			if  (a != 98 || b != 99)
			{
				putchar(com);
				putchar(32);
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
