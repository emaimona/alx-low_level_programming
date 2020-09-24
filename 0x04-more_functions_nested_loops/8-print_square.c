#include "holberton.h"

/**
 * print_square - print a square '#' n number of times
 * @size: The size of square
 * Return: Always 0
 */

void print_square(int size)
{
	int c = 0;

	for (; c < size; c++)
	{
		if (size > 0)
			_putchar('#');
	}
	_putchar('\n');

}
