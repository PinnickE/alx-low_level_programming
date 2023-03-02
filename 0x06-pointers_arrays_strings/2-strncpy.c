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
		if (b < n)
		{
			dest[b] = src[a];
		}

		a++;
		b++;
	}

	return (dest);
}
