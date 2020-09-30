#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s:  the string to be written
 * Return: void
 */

void rev_string(char *s)
{
	int v = 0, k = 0;
	char *n;

	for (; *(s + v) != '\0'; v++)
		;
	v--;
	for (; v >= 0; v--, k++)
		*(n + k) = *(s + v);
	for (v = 0; *(n + v) != '\0'; v++)
		*(s + v) = *(n + v);
	*(s + k) = '\0';
	_putchar('\n');
}
