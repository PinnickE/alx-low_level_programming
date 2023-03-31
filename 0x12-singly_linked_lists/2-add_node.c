#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Add a new node at the beginning of a list
 *
 * @head: First node
 * @str: String to add
 *
 * Return: Addres of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *newnode;

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
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
