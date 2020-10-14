#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your programs
 * @ac: arg counter
 * @av: arg vector
 * Return: a pointer to a new string, or NULL if it faills
 */

char *argstostr(int ac, char **av)
{
	int j, c, t = 0, i = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (j = 0; av[c][j]; j++)
			t++;
		t++;
	}
	t++;

	s = malloc(t * sizeof(char));

	if (s == NULL)
		return (NULL);
	for(c = 0; c < ac; c++)
	{
		for (j = 0; av[c][j]; j++)
		{
			s[i] = av[c][j];
			i++;
		}
		s[i] = '\n';
		i++;
	}
	i++;
	s[i] = '\0';

	return (s);
}
