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

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = (y * x);

			_putchar((z / 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
