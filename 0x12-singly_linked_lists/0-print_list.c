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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
