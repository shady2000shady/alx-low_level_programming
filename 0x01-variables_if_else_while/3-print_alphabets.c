#include <stdio.h>

/**
 * Main - Entery point
 *
 * Description: print alphabet in upper & lower cases
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar('\n');
	return (0);
}