#include "main.h"

/**
 * _isupper - check if input is uppercase
 * @c: input for alphabit
 *
 * Return: 1 if upper 0 if not
 */

int _isupper(int c)
{
	if (c <= 65 && c <= 90)
		return (1);
	else
		return (0);
}
