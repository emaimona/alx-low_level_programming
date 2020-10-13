#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array and init it with a specific char
 * @size: the size of the array
 * @c: the array
 * Return: Null if size = 0, pointer or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
