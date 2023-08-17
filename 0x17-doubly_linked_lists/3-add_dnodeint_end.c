#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: value of the element
 *
 * Return: address of the new element success,
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nod;

	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);

	nod->n = n;
	nod->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nod;
	}
	else
	{
		*head = nod;
	}

	nod->prev = h;

	return (nod);
}
