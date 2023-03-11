#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, a program that prints its name
 *
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
