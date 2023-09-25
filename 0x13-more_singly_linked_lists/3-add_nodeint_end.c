#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: A pointer header
 * @n: value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count3, *current2;

	count3 = malloc(sizeof(listint_t));
	if (count3 == NULL)
	return (NULL);

	count3->n = n;
	count3->next = NULL;

	if (*head == NULL)
	{
	*head = count3;
	return (count3);
	}
	current2 = *head;
	while (current2->next != NULL)
	{
	current2 = current2->next;
	}
	current2->next = count3;

	return (count3);
}
