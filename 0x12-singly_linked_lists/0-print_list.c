#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * print_list - Print all the elements of a list
 *
 * @h: Name of list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int tracker = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		tracker++;
		h = h->next;
	}

	return (tracker);
}
