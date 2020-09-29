#include "holberton.h"

/**
 * _puts - writes a string to a stdout followed by a new line
 * @str:  the string to be written
 * Return: Always 0
 */

void _puts(char *str)
{
	int v = 0;

	while (v >= 0)
	{
		if (*(str + v) == '\0')
			break;
		_putchar(*(str + v));
		v++;
	}
	_putchar('\n');
}
