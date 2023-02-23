#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	char count1, count2;

	for (count1 = '0'; count1 < '10'; count1++)
	{
		for (count2 = '0'; count2 <= '14'; count2++)
		{
			_putchar(count2);
		}
		_putchar('\n');
	}
}
