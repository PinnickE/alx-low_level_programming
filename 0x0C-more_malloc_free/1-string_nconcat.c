#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of chracters to accept
 *
 * Return: Pointer
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, cnt1, cnt2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	cnt1 = 0;

	while (s1[cnt1] != '\0')
	{
		cnt1++;
	}
	cnt2 = 0;
	while (s2[cnt2] != '\0')
	{
		cnt2++;
	}

	if (n < cnt2)
	{
		ptr = malloc(sizeof(char) * (cnt1 + n + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (cnt1 + cnt2 + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while (*(s1 + a) != '\0')
	{
		*(ptr + a) = *(s1 + a);
		a++;
	}

	for (b = 0; b < n; b++)
	{
		*(ptr + cnt1 + b) = *(s2 + b);
	}

	return (ptr);
}
