#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 * @s: String to parse
 *
 * Return: Length of string
 *
 */


int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}

	return (i);
}
