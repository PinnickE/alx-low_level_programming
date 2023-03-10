#include "main.h"

/**
 * _strncat - Concatenate two strings
 *
 * @dest: Original string
 * @src: String to append
 * @n: limit of characters to append
 *
 * Return: A pointer to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
