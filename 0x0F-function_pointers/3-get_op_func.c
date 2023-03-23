#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function to pick the right operator
 *
 * @s: Operator passed to the program
 *
 * Return: Pointer to corresponding operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int cntr = 0;

	while (ops[cntr].op != NULL && *(ops[cntr].op) != *s)
	{
		cntr++;
	}

	return (ops[cntr].f);
}
