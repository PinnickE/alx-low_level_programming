#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar("+1");
	}
	else if (n < 0)
	{
		return (-1);
		_putchar("-1");
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
