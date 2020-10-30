#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(const char *s);

/**
 * *add_node - adds a new node at the beginning of list_t
 * @head: The node to be added
 * @str: The string to add
 *
 * Return: The address of the new element, or NULL if it failled
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(node->str);
	node->next = *head;

	*head = node;
	return (node);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
