#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: The head node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = NULL;
		temp = temp->next;
	}

}
