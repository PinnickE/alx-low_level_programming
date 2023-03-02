#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: Destination for string
 * @src: String of characters to copy
 * @n: Number of characters to copy
 *
 * Return: Pointer to dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	if (a < n)
	{
		while (src[b] != '\0')
		{
			dest[b] = src[b];
			b++;
		}

		dest[b] = '\0';
	}

	else
	{
		while (b < n)
		{
			dest[b] = src[b];
			b++;
		}

		dest[b] = '\0';
	}

	return (dest);
}
