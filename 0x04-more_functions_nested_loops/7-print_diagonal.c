#include "main.h"

/**
 * print_diagonal - Print a diagonal line of height n
 *
 * @n: Height of the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n < 1)
	{
		_puthcar('\n');
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		
		_putchar(92);
		_putchar('\n');
	}
}
