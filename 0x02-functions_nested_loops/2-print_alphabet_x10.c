#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet ten times
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	int cntr = 0;

	while (cntr <= 10)
	{
		int ltr;

		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);

		}
			_putchar('\n');
		
	cntr++;
	}
}
