#include "holberton.h"

/**
 * print_triangle - print a triangle '#' n number of times
 * @size: The size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int c = 0;

	for (; c < size; c++)
	{
		if (size > 0)
			_putchar('#');
	}
	_putchar('\n');

}
