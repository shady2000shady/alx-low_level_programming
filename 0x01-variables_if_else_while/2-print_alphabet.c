#include <stdio.h>

/**
 * Main - Entery point
 *
 * Description: Print all letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
