#include "main.h"

/**
 * times_table - the nine times table
 *
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 12; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = y * x;

			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
