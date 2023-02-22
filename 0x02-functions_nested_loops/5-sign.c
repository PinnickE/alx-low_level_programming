#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: Integer to parse
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
