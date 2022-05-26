#include "list.h"

/**
 * print_listint - ftn that prints elements of a list
 * @h: head of a list
 * Return: No. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
