#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * between n and 98
 *
 * @n: number to parse
 *
 * Return: 0
 *
 */

void print_to_98(int n)
{
	int g = 98;

	if (n < 98)
	{
		do {
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		} while (n < 98);

		_putchar('0' + g);
	}

	else if (n == 98) 
	{
		_putchar('0' + n);
	}

	else
	{
		do {
			_putchar('0' + g);
			_putchar(',');
			_putchar(' ');
			g--;
		} while (g > n);

		_putchar('0' + n);
	}
}
