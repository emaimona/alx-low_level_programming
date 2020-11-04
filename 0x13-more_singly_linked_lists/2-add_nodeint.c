#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning of a listin_t
 * @head: The head node
 * @n: The data
 *
 * Return: The number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(struct listint_s));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}
