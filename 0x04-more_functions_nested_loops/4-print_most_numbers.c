#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 * excepting 2 & 4
 * only using _putchar twice
 * Return: Always 0 (sucess)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchat('\n');
}
