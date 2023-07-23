#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int nu, maxi, i;

	nu = 612852475143;
	maxi = -1;

	while (nu % 2 == 0)
	{
		maxi = 2;
		nu /= 2;
	}

	for (i = 3; i <= sqrt(nu); i = i + 2)
	{
		while (nu % i == 0)
		{
			maxi = i;
			nu = nu / i;
		}
	}

	if (nu > 2)
		maxi = nu;

	printf("%ld\n", maxi);

	return (0);
}
