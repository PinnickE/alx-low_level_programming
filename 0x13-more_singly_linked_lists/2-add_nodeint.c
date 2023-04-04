#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning
 * of a list
 *
 * @head: Pointer to first node
 * @n: Variable to insert
 *
 * Return: Address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *holder;

	holder = malloc(sizeof(listint_t));

	if (holder == NULL)
	{
		return (NULL);
	}

	holder->n = n;
	holder->next = *head;
	*head = holder;

	return (holder);
}
