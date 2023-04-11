#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *create_array - fonction that creates an array of chars
 *@size: size of array
 *@c: fille
 *Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;

	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
	{
	return (NULL);
	}

	for (a = 0; a < size; a++)
	{
	*(p + a) = c;
	}

return (p);
}
