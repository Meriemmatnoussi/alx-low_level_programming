#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
