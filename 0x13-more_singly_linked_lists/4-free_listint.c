#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fnct Free.
 * @head: A pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *current3;

	while (head != NULL)
	{
	current3 = head;
	head = head->next;
	free(current3);
	}
}
