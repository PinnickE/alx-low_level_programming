#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
        int a;
        int b;
	int c;

        for (a = 0; a <= 9; a++)
        {
		for (b = a + 1; b <= 9; b++)
                {
			for (c = b + 1; c <= 9; c++)
			{
				if ((a != )b && (b != c))
				{
					putchar('0' + a);
                               		putchar('0' + b);
					putchar('0' + c);
                       		 }
			}

                        putchar(',');
                        putchar(' ');
                }
        }

        putchar('\n');

        return (0);

}
