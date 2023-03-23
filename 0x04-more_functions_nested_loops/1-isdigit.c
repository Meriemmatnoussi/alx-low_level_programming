#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else
		return (0);
}
