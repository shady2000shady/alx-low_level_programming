#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int di1 = 0, di2;

	while (di1 <= 99)
	{
		di2 = di1;
		while (di2 <= 99)
		{
			putchar((di1 / 10) + 48);
			putchar((di1 % 10) + 48);
			putchar(' ');
			putchar((di2 / 10) + 48);
			putchar((di2 % 10) + 48);
			if (di1 != 98 || di2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			di2++;
		}
		di1++;
	}
	putchar('\n');

	return (0);
}
