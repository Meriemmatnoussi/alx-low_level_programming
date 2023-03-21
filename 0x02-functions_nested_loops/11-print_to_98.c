#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	/* loop from n to 98 */
	for (i = n; i <= 98; i++)
	{
		/* print the current number */
		printf("%d", i);

		/* if the current number is not the last one, print a comma and a space */
		if (i != 98)
		{
		printf(", ");
		}
	}

	/* print a newline character at the end */
	printf("\n");
}
