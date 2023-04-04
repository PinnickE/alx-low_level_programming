#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete had node
 *
 * @head: Pointer to head node
 *
 * Return: Node data
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	holder = (*head)->next;
	free(*head);
	*head = holder;

	return (data);
}
