#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *@a: first integer
 *@b: last integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int za;
za = *a;
*a = *b;
*b = za;
}
