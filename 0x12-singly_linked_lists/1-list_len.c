#include "lists.h"

/**
 * list_len - fnct to find the lenght of list
 * @h: head node.
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
