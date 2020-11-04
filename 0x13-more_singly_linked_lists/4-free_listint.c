#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: The head node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(temp);

}
