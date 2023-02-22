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
			printf("%d, ", n);
			n++;
		} while (n < 98);

		printf("%d", g);
	}

	else if (n == 98)
	{
		printf("%d", n);
	}

	else
	{
		do {
			printf("%d, ", g);
			g--;
		} while (g > n);

		printf("%d", n);
	}
}
