#include "holberton.h"

/**
 * puts_half - prints a half of a given string
 * @str: the string value
 * Return: void
 */

void puts_half(char *str)
{
	int v = 0, n;

	for (; *(str + v) != '\0'; v++)
		;
	v--;
	if (v % 2 == 0)
	{
		n = v / 2;
		for (; n < v; n++)
			_putchar(*(str + n));
	}
	else
	{
		n = (v - 1) / 2;
		for (; n < v - 1; n++)
			_putchar(*(str + n));
	}
	_putchar('\n');
}
