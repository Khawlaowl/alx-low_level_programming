#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - fnct that return nth node
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n= 0;
	listint_t *temp = head;

	while (temp != NULL  && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ? temp : NULL);
}
