#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 15, -15 and 0
 */

int _strcmp(char *s1, char *s2)
{
	int v1 = 0, v2 = 0, r;

	for (; *(s1 + v1) != '\0'; ++v1)
		;
	for (; *(s2 + v2) != '\0'; ++v2)
		;
	if (v1 < v2)
		r = -15;
	else if (v1 > v2)
		r = +15;
	else
		r = 0;
	return (r);
}
