#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digi = 0;

	while (digi <= 9)
	{
		putchar(digi + '0');
		digi++;
	}
	putchar('\n');

	return (0);
}
