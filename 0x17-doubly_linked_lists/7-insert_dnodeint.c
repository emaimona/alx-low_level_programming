#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The node pointer to the struct
 * @idx: is the index of the list where the new node should be added.
 * @n: the data
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *ptr;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1 ; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	ptr =  malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = temp;
	ptr->next = temp->next;
	temp->next->prev = ptr;
	temp->next = ptr;

	return (ptr);
}
