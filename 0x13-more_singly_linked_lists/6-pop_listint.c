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
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);

}
