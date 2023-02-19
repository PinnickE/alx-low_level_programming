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

		while (b < 10)
		{
			b++;

			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				c++;
			}
		}
	}
	
	putchar('\n');
	
	return (0);

}
