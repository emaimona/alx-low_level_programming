#include "holberton.h"

/**
 * print_line - print '-' n number of times
 * @n: The number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');

}
