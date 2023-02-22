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

	for (x = 48; x <= 1100; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			z = (y * x);

			_putchar(z + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
