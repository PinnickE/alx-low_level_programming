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
	int a;
	int b;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size); b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
