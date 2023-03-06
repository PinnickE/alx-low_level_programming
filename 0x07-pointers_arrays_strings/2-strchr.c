#include "main.h"

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
	int a;
	char *b = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (a = 0; a < n; a++)
	{
		if (s[a] == c)
		{
			*b = s[a];
			return (b);
		}
	}

	return (0);
}
