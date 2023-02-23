#include "main.h"

/**
 * print_line - Print a straight line of length n
 *
 * @n: Length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
