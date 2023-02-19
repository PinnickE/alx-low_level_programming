#include <stdio.h>

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
			for (int b = 0; b <= 9; b++)
			{
				putchar('0' + b);

				if (a == 9)
				{
					a++;
					b = 0;
				}
			}


	} while (a <= 9);

	return (0);
}
