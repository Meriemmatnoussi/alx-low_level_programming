#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup- converts ato ager
 *@str: string of chars
 *Return: On success, a pointer to a newly allocated memory block containing
 *a copy of the input string. On failure, NULL.
 */

char *_strdup(char *str)
{
	char *cp_str;
	int i;
	int j;

	if (str == NULL)
	{
	return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	cp_str = malloc((i + 1) * sizeof(char));

	if (cp_str == NULL)
	{
		return (0);
	}
	for (j = 0; j <= i; j++)
	{
	cp_str[j] = str[j];
	}
return (cp_str);
}
