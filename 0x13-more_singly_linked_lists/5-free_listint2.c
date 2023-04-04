#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free a list
 *
 * @head: Pointer to first node of list
 */

void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		freedom = (*head)->next;
		free(*head);
		*head = freedom;
	}

	*head = NULL;
}
