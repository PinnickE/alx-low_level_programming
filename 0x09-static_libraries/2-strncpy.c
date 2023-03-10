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

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
