#include "main.h"

/**
 * print_triangle - Print a triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int count;
	int across;
	int down;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (count = 1; count <= size; count++)
	{
		for (across = (size - count); across >= 1; across--)
		{
			_putchar(32);
		}

		for (down = 1; down <= count; down++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
