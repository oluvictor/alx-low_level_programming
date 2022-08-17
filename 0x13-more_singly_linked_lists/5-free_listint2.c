#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets hed to NULL.
 * @head: pointer to list list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{

			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}
		*head = NULL;
	}
}
