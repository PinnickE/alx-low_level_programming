#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Print function results
 *
 * @argc: Total arguments provided
 * @argv: Array containing arguments
 *
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	char *op;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if ((b == 48 && *argv[2] == 37) || (b == 48 && *argv[2] == 47))
	{
		printf("%s\n", "Error");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
