#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: The node
 *
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
