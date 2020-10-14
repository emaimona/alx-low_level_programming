#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: w of the grid
 * @height: H of the grid
 * Return: Null on failure, pointer
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
			return (0);
	}
	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= width; j++)
			*(*(s + i) + j) = 0;
	}
	return (s);
}
