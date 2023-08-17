#include "lists.h"

/**
 * get_dnodeint_at_index - returns node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index node to search, starting from 0
 *
 * Return: node number or index, success
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *new;

	size = 0;
	if (head == NULL)
	return (NULL);

	new = head;
	while (new)
	{
	if (index == size)
	return (new);
	size++;
	new = new->next;
	}
	return (NULL);
}
