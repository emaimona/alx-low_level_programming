#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of ele in listint_t
 * @h: The node to be printed
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
		h = h->next;

	return (n);
}
