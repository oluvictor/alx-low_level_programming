#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		while (1)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] (%s)\n", h->len, h->str);
			size++;
			if (h->next == NULL)
				break;
			h = h->next;
		}

	}
	return (size);
}
