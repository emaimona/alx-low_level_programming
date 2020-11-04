#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: The head node
 *
 * Return: The node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);

	return (temp->n);
	free(temp);

}
