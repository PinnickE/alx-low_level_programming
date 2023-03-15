#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Return pointer to a newly allocated
 * space in memory of copied string
 *
 * @str: String to copy
 *
 * Return: Pointer to string or NULL
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	int a, cnt;

	if (str == NULL)
	{
		return (NULL);
	}

	cnt = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
	}

	ptr = malloc(sizeof(char) * (cnt + 1));

	a = 0;

	while (*(str + a) != '\0')
	{
		*(ptr + a) = *(str + a);

		a++;
	}

	return (ptr);
}
