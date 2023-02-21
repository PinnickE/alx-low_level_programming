#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Print all alphabets in lower case,
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
