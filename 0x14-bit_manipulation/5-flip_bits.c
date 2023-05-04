#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 *             need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bit_diff = n ^ m;

	while (bit_diff)
	{
		count += bit_diff & 1;
		bit_diff >>= 1;
	}

	return (count);
}
