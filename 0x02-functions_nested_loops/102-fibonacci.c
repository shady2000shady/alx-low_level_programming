#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 * separated by a comma followed by a space.
 * Return: Always 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (int n = 0; n < 50; n++)
		{
			sum = fib1 + fib2;
			printf("%lu", sum);
			fib1 = fib2;
			fib2 = sum;
			if (n == 49)
				printf("\n");
			else
				printf(", ");
		}
	return (0);
}

