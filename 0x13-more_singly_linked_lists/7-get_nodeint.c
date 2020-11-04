#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t
 * @head: The head node
 * @index: The index of the node, starting at 0
 *
 * Return: The node's data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (; i < index, n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);

}
