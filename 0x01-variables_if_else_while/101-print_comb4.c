#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
        int a = 0;
        int b = 1;
	int c = 2;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				c++;
			}
			b++;
		}
		a++;
	}

        putchar('\n');

        return (0);

}
