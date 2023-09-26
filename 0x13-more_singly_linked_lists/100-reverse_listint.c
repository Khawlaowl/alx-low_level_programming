#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pntr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = pntr;
	pntr = *head;
	*head = next;
	}

	*head = pntr;

	return (*head);
}
