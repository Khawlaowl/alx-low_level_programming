#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - fnct to Inserts a new node at a given position
 * @head: A pointer to a pointer
 * @idx: The index at which to insert the node
 * @n: The data to be stored in the node.
 *
 * Return: The address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, c_node;
	unsigned int h = 0;

	if (!head)
		return (NULL);
	n_node = malloc(sizeof(unsigned int));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	if (idx == 0)
	{
	n_node->next = *head;
	*head = n_node;
	return (n_node);
	}

	c_node = *head;
	while (c_node != NULL)
	{
	if (h == idx - 1)
	{
	n_node->next = c_node->next;
	c_node->next = n_node;
	return (n_node);
	}
	c_node = c_node->next;
	h++;
	}

	free(n_node);
	return (NULL);
}
