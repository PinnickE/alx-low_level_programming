#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a = 0;

	do {
		putchar('0' + a);
		a++;

		if (a != 9)
		{
			putchar (',');
			putchar (' ');
		}

	} while (a <= 9);

	return (0);
}
