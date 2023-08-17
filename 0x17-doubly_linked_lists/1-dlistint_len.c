#include "lists.h"

/**
 * dlistint_len - return number of elements
 * @h: head of the list
 * Return: the number of nodes, success 1 or -1 fail
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
