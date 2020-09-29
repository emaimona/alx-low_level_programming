#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int v = *a;
	*a = *b;
	*b = v;
}
