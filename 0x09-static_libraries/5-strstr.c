#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring
 *
 * @haystack: String to search
 * @needle: Substring to locate
 *
 * Return: Pointer to the beginning of the string
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int cnt1 = 0;
	int cnt2 = 0;
	int a;

	if (!needle || !haystack)
	{
		return (NULL);
	}

	while (haystack[cnt1] != '\0')
	{
		cnt1++;
	}

	while (needle[cnt2] != '\0')
	{
		cnt2++;
	}

	for (a = 0; a <= cnt1 - cnt2; a++)
	{
		int b;

		for (b = 0; b < cnt2; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}

		if (b == cnt2)
		{
			return (haystack + a);
		}
	}

	return (NULL);

}
