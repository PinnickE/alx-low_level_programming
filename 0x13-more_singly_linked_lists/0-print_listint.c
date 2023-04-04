#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all elements of a list
 *
 * @h: Pointer to list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes = nodes + 1;
		h = h->next;
	}

	return (nodes);
}
