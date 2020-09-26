#include "holberton.h"

/**
 * print_diagonal - print '\' n number of times
 * @n: The number of times
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		if (n > 0)
			_putchar('\\');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
