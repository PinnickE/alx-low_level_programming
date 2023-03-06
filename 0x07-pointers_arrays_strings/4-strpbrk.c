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
	char *new = 0;
	int cnt1;
	int cnt2;

	if (!s || !accept)
	{
		return (NULL);
	}

	for (cnt1 = 0; s[cnt1] != '\0'; cnt1++)
	{
		for (cnt2 = 0; accept[cnt2] != '\0'; cnt2++)
		{
			if (s[cnt1] == accept[cnt2])
			{
				while (accept[cnt2])
				{
					new = new + *s;
				}
			return (new);
			}
		}
	}
	
	return (NULL);	
}
