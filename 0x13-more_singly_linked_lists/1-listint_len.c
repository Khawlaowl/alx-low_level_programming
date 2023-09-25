#include <stdio.h>
#include "lists.h"

/**
 * listint_len - fnct that print the numbr of elmnts
 * @h: the head ptr
 *
 * Return: nmbr
 */
size_t listint_len(const listint_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);

}
