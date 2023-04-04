#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Free a list
 *
 * @head: Pointer to first node in list
 *
 * Return: NULL if it fails
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
