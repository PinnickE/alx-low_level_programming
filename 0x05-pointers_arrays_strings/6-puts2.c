#include "main.h"

/**
 * puts2 - Print every other character of a string
 *
 * @str: String to parse
 *
 * Return: String
 *
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
