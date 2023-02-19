#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int hex;

	for (hex = 0; hex <= 16; hex++)
	{
		hex = scanf("%x", &hex);
		putchar('0' + hex);
	}

	putchar('\n');

	return (0);

}
