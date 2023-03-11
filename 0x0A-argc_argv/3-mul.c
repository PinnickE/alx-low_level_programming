#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point, a program that multiplies two numbers
 *
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multi = 0;
	int first = atoi(argv[1]);
	int second = atoi(argv[2]);

	if (argc == 3)
	{
		multi = first * second;
		printf("%d\n", multi);
		return (0);
	}

	else
	{
		puts("Error");
		return (1);
	}
}
