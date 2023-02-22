#include "main.h"

/**
 * print_last_digit - Print the last digit
 * of a number
 *
 * @x: The number to parse
 *
 * Return: 0
 */

int print_last_digit(int x)
{
	int y;
	int z;

	y = 0 + x;
	z = y % 10;

	_putchar(z % 10);

	return (z);
}
