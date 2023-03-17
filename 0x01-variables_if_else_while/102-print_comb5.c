#include <stdio.h>
#include <stdbool.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;
	bool is_first_iteration = true;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == k && l <= j)
					{
						continue;
					}

					if (is_first_iteration == false)
					{
						putchar(',');
						putchar(' ');
					}

					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					is_first_iteration = false;
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
