#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the min value
 * @max: the max value
 * Return: a pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);

	p = malloc(max * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (; i + min <= max; i++)
		p[i] = i;

	return (p);
}
