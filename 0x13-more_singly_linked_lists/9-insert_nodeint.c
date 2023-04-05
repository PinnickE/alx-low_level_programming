#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a given position
 *
 * @head: Pointer to first node
 * @idx: Index for node to be inserted
 * @n: Variable to insert
 *
 * Return: Node address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cntr;
	listint_t *holder = *head;
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL || head == NULL)
	{
		return (NULL);
	}

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (cntr = 0; cntr < idx && holder != NULL; cntr++)
	{
		if (cntr == idx - 1)
		{
			add->next = holder->next;
			holder->next = add;
			return (add);
		}
		else
		{
			holder = holder->next;
		}
	}

	return (NULL);
}
