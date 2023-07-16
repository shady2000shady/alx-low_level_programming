#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all possible combinations of single-digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digi = 0;

	while (digi <= 9)
	{
		putchar(digi + 48);

		if (digi != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digi++;
	}
	putchar('\n');

	return (0);
}
