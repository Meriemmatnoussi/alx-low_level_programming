#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
int i, j, a, b;
char *z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	z = malloc(sizeof(char) * (i + j + 1));
	if (z == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
	z[a] = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		z[a] = s2[b];
		a++;
	}

	return (z);
}
