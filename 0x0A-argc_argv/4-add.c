#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if success, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int i, j, sum;

sum = 0;

if (argc < 2)
{
	printf("0\n");
	return (0);
}

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (!isdigit(argv[i][j]))
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
