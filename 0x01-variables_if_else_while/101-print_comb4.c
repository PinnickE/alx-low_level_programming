#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
        int a = -1;
        int b = 0;
	int c = 1;

	while (a < 10)
	{
		a++;
		putchar('0' + a);

		while (b < 10)
		{
			b++;
			putchar('0' + b);

			while (c < 10)
			{
				c++;
				putchar('0' + c);
			}
		}
	}
	
	putchar('\n');
	
	return (0);

}
