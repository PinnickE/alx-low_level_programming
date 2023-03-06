#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string
 * for any of a set of bytes
 *
 * @s: String to parse
 * @accept: Accepted set of bytes
 *
 * Return: A pointer to the matching bytes
 *
 */

char *_strpbrk(char *s, char *accept)
{

	if (!s || !accept)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}

			accept++;
		}
	}

	return (NULL);
}
