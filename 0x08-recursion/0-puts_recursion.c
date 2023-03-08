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
	while (*s != '\0')
	{
		_putchar(*s++);
	}

	_putchar('\n');
}
