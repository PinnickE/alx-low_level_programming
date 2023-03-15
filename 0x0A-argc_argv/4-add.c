#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enty Point, a program that adds positive numbers
 *
 * @argc: Number of command line elements
 * @argv: Array of elements
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int a, b, x;
	int c = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (b = 1; b < argc; b++)
	{
		while (argv[b][c] != '\0')
		{
			if (argv[b][c] < 48 || argv[b][c] > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
			c++;
		}
	}

	for (a = 1; a < argc; a++)
	{
		x = atoi(argv[a]);
		sum += x;
	}

	printf("%d\n", sum);
	return (0);
}
