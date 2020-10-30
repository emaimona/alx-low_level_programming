#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Gets the lenght of a string
 * @s: The string value
 *
 * Return: The lenght of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;

	return (i);
}

/**
 * *add_node_end - adds new node at the end of a list_t list
 * @head: The pointer to the node
 * @str: The string pointer
 *
 * Return: The adress of the new element, or NULL if it failled
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
