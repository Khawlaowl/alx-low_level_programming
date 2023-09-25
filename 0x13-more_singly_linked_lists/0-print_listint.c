#include"main.h"

/**
 * print_listint - fnct thzt prints all the elmnts
 * @h: pointer to the head of the list
 *
 * Return: the nmbr of noods
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (!h)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
