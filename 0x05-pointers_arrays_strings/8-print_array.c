#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of int followed by a new line
 * @a: the array
 * @n: number of the elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		if (v == (n - 1))
			printf("%d", *(a + v));
		else
			printf("%d, ", *(a + v));
	}
	_putchar('\n');
}
