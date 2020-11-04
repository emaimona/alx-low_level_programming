#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t
 * @listint_t: The node to be printed
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	for (; h ; n++)
	{
		printf("%u\n", h->n);
		h = h->next;
	}
	return (n);
}
