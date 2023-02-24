#include "main.h"

/**
 * print_square - Print a square of size n
 *
 * @size: Length of the line
 *
 * Return: void
 */

void print_square(int size)
{
	int s;

	if (n < 1)
	{
		_putchar('\n');
	}

	for (s = 0; s < size; s++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar(35);
		}
		_puthcar('\n');
	}
}
