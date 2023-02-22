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
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		} while (n < 98);

		_putchar(g);
	}

	else
	{
		do {
			_putchar(g);
			_putchar(',');
			_putchar(' ');
			g--;
		} while (g > n);

		_putchar(n);
	}
}
