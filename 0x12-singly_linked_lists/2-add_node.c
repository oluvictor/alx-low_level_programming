#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a list
 * @str: string to the added
 *
 * Return: pointer to head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		if (*head == NULL)
			new->next = NULL;
		else
			new->next = *head;
		return (new);

	}
	return (NULL);
}
