#include "main.h"

/**
 * _strcpy - Copy string
 *
 * @dest: Pointer
 * @src: Pointed string
 *
 * Return: string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int strl = 0;

	while (*(src + strl) != '\0')
	{
		*(dest + strl) = *(src + strl);
		strl++;
	}

	*(dest + strl) = '\0';

	return (dest);
}
