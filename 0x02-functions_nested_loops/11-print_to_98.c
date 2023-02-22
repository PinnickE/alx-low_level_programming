#include "main.h"
#include <stdio.h>

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
			printf(n);
			printf(',');
			printf(' ');
			n++;
		} while (n < 98);

		printf(g);
	}

	else if (n == 98)
	{
		printf(n);
	}

	else
	{
		do {
			printf(g);
			printf(',');
			printf(' ');
			g--;
		} while (g > n);

		printf(n);
	}
}
