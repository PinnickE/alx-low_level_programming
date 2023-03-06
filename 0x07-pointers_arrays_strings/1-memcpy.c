#include "main.h"

/**
 * _memcpy - Copy memory area
 *
 * @dest: Destination area
 * @src: Source area
 * @n: Number of characters to copy
 *
 * Return: Pointer to destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
