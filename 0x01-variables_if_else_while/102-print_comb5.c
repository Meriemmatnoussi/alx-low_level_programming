#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int a = i / 10, b = i % 10;
			int c = j / 10, d = j % 10;

			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
			putchar('0' + c);
			putchar('0' + d);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
