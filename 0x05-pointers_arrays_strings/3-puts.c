#include "holberton.h"

/**
 * _puts - writes a string to a stdout followed by a new line
 * @str:  the string to be written
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
