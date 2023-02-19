#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig;
	char lett;

	for (dig = 0; dig < 10; dig++)
	{
		putchar('0' + dig);
	}

	for (lett = 'a'; lett <= 'e'; lett++)
	{
		puthcar(lett);
	}

	putchar('\n');

	return (0);

}
