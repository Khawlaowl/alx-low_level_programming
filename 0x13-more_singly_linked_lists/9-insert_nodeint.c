#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - fnct inserts a new node in a linked list
 * @head: pntr
 * @idx: index
 * @n: data
 *
 * Return: pntr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (m = 0; tmp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
