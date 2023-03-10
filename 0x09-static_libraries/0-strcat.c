#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: Original string
 * @src: String to append
 *
 * Return: A pointer to dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	do {
		a++;
	} while (dest[a] != '\0');

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
