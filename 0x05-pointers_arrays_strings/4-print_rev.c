#include "holberton.h"

/**
 * print_rev - writes a string in reverse followed by a new line
 * @s:  the string to be written
 * Return: Always 0
 */

void print_rev(char *s)
{
	int v = 0;

	for (; *(s + v) != '\0'; v++)
		;
	for (; v >= 0; v--)
		_putchar(*(s + v));

	_putchar('\n');
}
