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

	y = (x % 10);

	if (y < 0)
	{
		y = y * -1;
	}

	_putchar(y + '0');

	return (y);
}
