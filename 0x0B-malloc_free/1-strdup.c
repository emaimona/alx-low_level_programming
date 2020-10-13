#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: the pointer
 * Return: Null if str = Null, pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, t = 0;

	if (str == NULL)
		return (NULL);

	for (; str[i]; i++)
		;
	i++;

	s = malloc(i * sizeof(*str));
		for (; t < i; t++)
			s[t] = str[t];
	return (s);
}
