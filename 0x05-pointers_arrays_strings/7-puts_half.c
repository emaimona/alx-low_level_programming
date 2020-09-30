#include "holberton.h"

/**
 * puts_half - prints a half of a given string
 * @str: the string value
 * Return: void
 */

void puts_half(char *str)
{
	int v = 0, n = 0;

	for (; *(str + v) != '\0'; ++v)
		;
	if (v % 2 == 0)
		n = v / 2;
	else
		n = (v - 1) / 2;
	for (; n < v; ++n)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
