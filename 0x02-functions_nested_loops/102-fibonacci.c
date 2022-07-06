#include <stdio.h>

/**
 * main - Prints out first 50
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%1u", k);
		if (count == 49)
			putchar('\n');
		else
		{
		printf(", ");
		}
	}
	return (0);
}
