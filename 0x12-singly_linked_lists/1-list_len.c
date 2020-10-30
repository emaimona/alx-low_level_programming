#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: The node
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;

	return (i);
}
