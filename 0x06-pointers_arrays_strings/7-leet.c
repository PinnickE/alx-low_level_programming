#include "main.h"

/**
 * leet - Encode string to 1337
 *
 * @a: string to encode
 *
 * Return: Encoded string
 *
 */

char *leet(char *a)
{
	int x;
	int y;

	char first[] = "aAeEoOtTlL";
	char second[] = "4433007711";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == first[y])
			{
				a[x] = second[y];
			}
		}
	}

	return (a);
}
