#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @a: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *a)
{
	int j;
	int i = 0;
	char init[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char fin[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(a + i) == init[j])
			{
				*(a + i) = fin[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
