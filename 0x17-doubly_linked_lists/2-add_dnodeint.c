#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 *@head: head of the list
 * @n: value of the element
 *
 * Return: address of the new element, success (1)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nod;
	dlistint_t *h;

	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);

	nod->n = n;
	nod->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nod->next = h;

	if (h != NULL)
		h->prev = nod;

	*head = nod;

	return (nod);
}
