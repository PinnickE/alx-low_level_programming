#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add a node at the end of a list
 *
 * @head: Pointer to list
 * @str: String to add
 *
 * Return: Address of new element or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *newnode;
	list_t *holder = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (holder->next != NULL)
	{
		holder = holder->next;
	}

	holder->next = newnode;

	return (newnode);
}
