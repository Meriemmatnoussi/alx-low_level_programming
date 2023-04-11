#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - function returns a pointer to a new string
 *
 *@str: string of chars
 *
 *Return: (copy_str) or (NULL)
 */

char *_strdup(char *str)
{
char *copy_str =(char*) malloc(10);

	if (str == NULL || copy_str == NULL)
	{
	return (NULL);
	}
	else
	{
	strcpy(copy_str, str);
	return (copy_str);
	}
}
