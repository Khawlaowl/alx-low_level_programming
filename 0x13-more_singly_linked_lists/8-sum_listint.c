#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - fnct that calculates the sum
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum5 = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum5 += temp->n;
		temp = temp->next;
	}

	return (sum5);
}
