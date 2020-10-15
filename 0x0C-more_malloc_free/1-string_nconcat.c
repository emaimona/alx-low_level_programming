#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int t1, t2, i, j;

	for (t1 = 0; s1[t1]; ++t1)
		;

	for (t2 = 0; s2[t2]; ++t2)
		;

	p = malloc((t1 + n + 1) * sizeof(*p));
	if (p == NULL || n <= 0)
		return (NULL);

	for (i = 0; i < t1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	i++;
	p[i] = '\0';

	return (p);
}
