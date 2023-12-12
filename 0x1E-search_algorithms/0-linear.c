#include "search_algos.h"

/**
 * linear_search - function that search for and index
 * @array: the list
 * @size: size of the list
 * @value: the value to search for
 * Return: index if found, -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
