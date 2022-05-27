#include "lists.h"
/**
 * pop_listint - returns the head of a
 * linked list
 * @head: head of a list
 * Return: head of the node
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
