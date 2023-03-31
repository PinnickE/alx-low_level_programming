#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * list_len - Return the number of elements in a list
 *
 * @h: Name of list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	int tracker = 0;

	while (h)
	{
		tracker++;
		h = h->next;
	}

	return (tracker);
}
