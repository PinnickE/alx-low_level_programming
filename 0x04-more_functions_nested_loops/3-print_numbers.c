#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int count;

	for (count = 48; count <= 57; count++)
	{
		_puthcar(count);
		_putchar('\n');
	}

	return (0);
}
