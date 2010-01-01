#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t
 * @h: The node structure
 *
 * Return: The nnumber of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
		h = h->next;

	return (cont);
}
