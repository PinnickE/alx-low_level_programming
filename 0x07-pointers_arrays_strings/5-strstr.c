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
	int cnt1;
	int cnt2;

	if (!needle || !haystack)
	{
		return (NULL);
	}

	for (cnt1 = 0; haystack[cnt1] != '\0'; cnt1++)
	{
		for (cnt2 = 0; needle[cnt2] != '\0'; cnt2++)
		{
			if (haystack[cnt1 + cnt2] == needle[cnt2])
			{
				return (haystack + (cnt1 + cnt2));
			}
		}
	}

	return (NULL);

}
