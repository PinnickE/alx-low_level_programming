#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * excluding 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
		if (z == '2' || z == '4')
		{
			continue;
		}

		_puthcar(z + '0');
	}

	_puthcar('\n');
}
