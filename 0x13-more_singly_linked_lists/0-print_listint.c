#include <stdio.h>
#include "lists.h"

/**
 * print_listint - fnct to prints all the elemnts.
 * @h: pnt to the head
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count0 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count0++;
	}

	return (count0);
}
