#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - fct that print all the elements of a list
 * @h: pointer
 *
 * Return:the num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;

	}
	return (nodes);
}
