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
	int cnt;

	while (*s != '\0')
	{
		for (cnt = 0; accept[cnt] != '\0'; cnt++)
		{
			if (*s == accept[cnt])
			{
				return (s);
			}

			s++;
		}
	}

	return (NULL);
}
