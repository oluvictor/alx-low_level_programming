#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to list list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	listint_t *new_head;

	if (head != NULL)
		return (0);

	temp = *head;
	new_head = temp->next;
	n = temp->n;

	*head = new_head;
	free(temp);
	return (n);
}
