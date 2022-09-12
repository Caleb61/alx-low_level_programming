#include <stdio.h>

/**
 * main - Prints possible combinations of two 2-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, p;

	for (i = 0; i <= 98; i++)
	{
		for (p = i + 1; p <= 99; p++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');

			if (i == 98 && p == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
