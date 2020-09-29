#include "holberton.h"

/**
 * _strlen - returns the lenght of a given string
 * @s: the string value
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int v = 0;

	while (v >= 0)
	{
		if (*(s + v) == '\0')
			break;
		v++;
	}
	return (v);
}
