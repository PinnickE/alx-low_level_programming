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
	int a, b;
	int c = 0;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (b = 0; b < argc; b++)
	{
		while (argv[b][c] != '\0')
		{
			if (argv[b][c] < 48 || argv[b][c] > 57)
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (a = 0; a < argc; a++)
	{
		result += atoi(argv[a]);
		printf("%d\n", result);
	}

	return (0);
}
