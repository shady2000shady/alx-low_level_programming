#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print reverse  alphabet letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
