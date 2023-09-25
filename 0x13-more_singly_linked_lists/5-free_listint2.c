#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - fnct Frees and sets the head to NULL.
 * @head: A pointer to a pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *current3, *tmp;

	current3 = *head;
	while (current3 != NULL)
	{
	tmp = current->tmp;
	free(current3);
	current3 = tmp;
	}

	*head = NULL;
}
