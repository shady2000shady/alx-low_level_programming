#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all the numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digi = 48;

	while (digi <= 102)
	{
		putchar(digi);
		if (digi == 57)
			digi += 39;
		digi++;
	}
	putchar('\n');

	return (0);
}
