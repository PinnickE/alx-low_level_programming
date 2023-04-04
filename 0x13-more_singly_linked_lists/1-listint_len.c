#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elemnts in a list
 *
 * @h: Pointer to list
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements = elements + 1;
		h = h->next;
	}

	return (elements);
}
