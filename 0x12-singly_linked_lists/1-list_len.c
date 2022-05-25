#include "list.h"
/**
 * list_len - function that returns number of elements in links
 * @h: parameter list
 * Return: len structure
 */
size_t list_len(const list_t *h)
{
	size_t l_node;

	l_node = 0;
	while (h != NULL)
	{
		h = h->next;
		l_node++;
	}
	return (l_node);
}
