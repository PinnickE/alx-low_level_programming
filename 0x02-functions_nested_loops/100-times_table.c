#include "main.h"

/**
 * print_times_table - the n times table
 *
 * @n: the number for the table
 *
 * Return: 0
 */

void print_times_table(int n)
{
	if ((n > -1) && (n < 16))
	{
		int x;
		int y;
		int z;

		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				_putchar(44);
				_putchar(32);
				z = x * y;
				if (z <= n)
				{
					_putchar(32);
				}
				else
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
