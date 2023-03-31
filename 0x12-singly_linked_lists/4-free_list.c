#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a list
 *
 * @head: Pointer to list
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
