#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: the size
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL || b <= 0)
		exit(98);
	return (p);
}
