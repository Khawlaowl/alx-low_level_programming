#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: pointer
 * @index: index (delete)
 *
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current4, *prev;
	unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    current4 = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current4);
        return (1);
    }

    while (current4 != NULL)
    {
        if (i == index)
        {
            prev->next = current4->next;
            free(current4);
            return(1);
        }
        prev = current4;
        current4 = current4->next;
        i++;
    }

    return (-1);
}
