#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new
 * node at a given position
 * @head: pointer to head list
 * @idx: index of the list where the new node should be added
 * @n: int for the new node
 *
 * Return: pointer to the new head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	int flag = 0;
	listint_t *new;
	listint_t *curr;
	listint_t *temp;

	new  = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	curr = *head;
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		for (i = 0; curr != NULL && i < idx; i++)
		{
			if (i == (idx - 1))
			{
				temp = curr->next;
				curr->next = new;
				curr = temp;
				flag = 1;
				break;
			}
			curr = curr->next;
		}
		if (flag == 0)
			return (NULL);
		new->next = temp;
	}

	return (new);
}
