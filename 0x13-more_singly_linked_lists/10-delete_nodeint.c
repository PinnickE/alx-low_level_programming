#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at a given position
 *
 * @head: Pointer to first node
 * @index: Index for node to be deleted
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder, *next;
	unsigned int cntr;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	holder = *head;

	for (cntr = 0; cntr < index - 1; cntr++)
	{
		if (holder->next == NULL)
		{
			return (-1);
		}

		holder = holder->next;
	}

	next = holder->next;
	holder->next = next->next;
	free(next);

	return (1);
}
