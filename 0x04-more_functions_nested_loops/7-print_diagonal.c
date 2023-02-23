#include "main.h"

/**
 * print_diagonal - Print a diagonal line of height n
 *
 * @n: Height of the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b = 0;

	for (a = 0; a < n; a++)
	{
		while (b < n)
		{
			_putchar(32);
			b++;
		}

		_putchar(92);
	}
}
