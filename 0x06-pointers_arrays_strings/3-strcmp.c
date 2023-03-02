#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string of characters
 * @s2: Second string of characters
 *
 * Return: Difference between non-matching string
 *
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		return (0);
		a++;
	}

	return (s1[a] - s2[a]);
}
