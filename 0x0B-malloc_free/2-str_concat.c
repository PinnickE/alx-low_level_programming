#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer or NULL
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a, b, cnt1, cnt2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		cnt1 = 0;
		while (s1[cnt1] != '\0')
		{
			cnt1++;
		}
	}

	if (s2 != NULL)
	{
		cnt2 = 0;
		while (s2[cnt2] != '\0')
		{
			cnt2++;
		}
	}
	ptr = (char *) malloc(sizeof(char) * (cnt1 + cnt2 + 1));

	a = 0;
	while (*(s1 + a) != '\0')
	{
		*(ptr + a) = *(s1 + a);
		a++;
	}
	b = 0;
	while (*(s2 + b) != '\0')
	{
		*(ptr + cnt1 + b) = *(s2 + b);
		b++;
	}
	return (ptr);
}
