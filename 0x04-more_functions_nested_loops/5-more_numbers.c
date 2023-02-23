#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int count1;
	int count2;

	for (count1 = 0; count1 < 10; count1++)
	{
		for (count2 = 0; count2 <= 14; count2++)
		{
			if (count2 >= 10)
			{
				_putchar('1');
			}
			_putchar(count2 % 10 + '0');
		}
		_putchar('\n');
	}
}
