#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: String to parse
 *
 * Return: Length of string
 *
 */

int _strlen(char *s)
{
	int los = 0;

	while (*s != '\0')
	{
		los++;
		s++;
	}

	return (los);
}
