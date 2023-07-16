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
char c = 'a';
char C = "A";
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
