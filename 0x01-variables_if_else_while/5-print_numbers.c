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
		printf("%i", digi);
		digi++;
	}
	putchar('\n');
	return (0);
}
