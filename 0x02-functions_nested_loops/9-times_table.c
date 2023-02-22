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
		_putchar(48);

		for (y = 1; y <= 9; y++)
		{
			_putchar(44);
			_putchar(32);

			z = x * y;

			if (z <= 9)
			{
				_putchar(32);
			}
			else
			{
				_putchar((z / 10) + 0);
			}
			
			_putchar((z % 10) + '0');
		}

		_putchar('\n');
	}
}
