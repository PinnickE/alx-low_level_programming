#include "main.h"

/**
 * jack_bauer - print every minute
 * of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hrs1;
	int hrs2;
	int mins1;
	int mins2;

	for (hrs1 = 0; hrs1 <= 2; hrs1++)
	{
		for (hrs2 = 0; hrs2 <= 3; hrs2++)
		{
			for (mins1 = 0; mins1 <= 5; mins1++)
			{
				for (mins2 = 0; mins2 <= 9; mins2++)
				{
					_putchar(hrs1 + '0');
					_putchar(hrs2 + '0');
					_putchar(58);
					_putchar(mins1 + '0');
					_putchar(mins2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
