#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Sum list data
 *
 * @head: Pointer to head of list
 *
 * Return: Sum or NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
