#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - fnct that deletes the head node and eturn the data
 * @head: the head node
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *pntr;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	else
	{

		 k = (*head)->n;
		 pntr = (*head)->next;
		 free(head);
		 *head = pntr;

		 return (k);
	}

}
