#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get nth node of list
 *
 * @head: Pointer to first node
 * @index: Index of element
 *
 * Return: Node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cntr;

	if (head == NULL)
	{
		return (NULL);
	}

	for (cntr = 0; cntr < index; cntr++)
	{
		head = head->next;

		if (head == NULL)
		{
			return (NULL);
		}
	}

	return (head);
}
