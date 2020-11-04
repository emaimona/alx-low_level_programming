#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t
 * @h: The node to be printed
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
