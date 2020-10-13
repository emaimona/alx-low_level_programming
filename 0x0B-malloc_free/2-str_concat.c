#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i1 = 0, i2 = 0, size = 0, j = 0;

	if (s1 == NULL)
		return (NULL);

	for (; s1[i1]; i1++)
		;
	i1++;

	if (s2 == NULL)
		return (NULL);
	for (; s2[i2]; i2++)
		;
	i2++;

	size = i1 + i2 - 1;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (; j < i1; j++)
		str[j] = s1[j];

	for (j = 0; j + i1 < size; j++)
		str[i1 + j] = s2[j];

	return (str);
}
