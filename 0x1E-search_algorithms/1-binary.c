#include "search_algos.h"

/**
 * print_array - function that prints an array
 * @array: the array to print
 * @start: the start index of the array
 * @end: the end index of the array
 * Return: void
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (array == NULL || start > end)
	{
		printf("Invalid input or empty array\n");
		return;
	}

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: index if found, -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, m;

	if (array == NULL)
		return (-1);

	i = 0;
	j = size - 1;

	while (i <= j)
	{
		m = (i + j) / 2;
		print_array(array, i, j);

		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}

	return (-1);
}
