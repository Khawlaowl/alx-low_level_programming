#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - fnct that adds a new node at the beg
 * @head: the pntr
 * @n: int to be stored in the new node
 *
 * Return:  address of the new elemts or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count2;

	count2 = malloc(sizeof(listint_t));
	if (count2 == NULL)
		return (NULL);
	count2->n = n;
	count2->next = *head;

	*head = count2;
	return (count2);
}
