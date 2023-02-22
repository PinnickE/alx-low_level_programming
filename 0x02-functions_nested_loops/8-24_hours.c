#include "main.h"

/**
 * jack_bauer - print every minute
 * of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(58);
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
