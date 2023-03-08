#include "main.h"

/**
 * _puts_recursion - Print string followed by
 * a new line
 *
 * @s: String to print
 *
 * Return: 0
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s++);
	}

	else
	{
		_putchar('\n');
	}
}
