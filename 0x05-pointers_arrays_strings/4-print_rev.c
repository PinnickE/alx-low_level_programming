#include "main.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: String to print
 *
 * Return: lenght of string
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 1)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
