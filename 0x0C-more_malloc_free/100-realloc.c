#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc an free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size in bytes of the new block
 * Return: a pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old = ptr;
	unsigned int i, m = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size * sizeof(*old));
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;

	for (i = 0; i < m; i++)
	{
		p[i] = old[i];
	}
	free(ptr);

	return (p);
}
