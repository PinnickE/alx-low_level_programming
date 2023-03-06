#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in a string
 *
 * @s: String of characters
 * @c: Character to locate
 *
 * Return: Pointer to first occurence of character
 *
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		else
		{
			s++;
		}
	}

	if (!c)
	{
		return (s);
	}

	return (NULL);
}
