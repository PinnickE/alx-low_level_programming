#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add node at end of list
 *
 * @head: Pointer to first node
 *
 * @n: Variable to add
 *
 * Return: New element address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *holder = *head;
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (holder->next != NULL)
	{
		holder = holder->next;
	}

	holder->next = add;

	return (add);

}
