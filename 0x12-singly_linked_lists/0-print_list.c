#include "lists.h"
#include <stdio.h>


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
			printf("[%d] %s", h->len, h->str);
		}
		tracker++;
		h = h->next;
	}

	return (tracker);
}
