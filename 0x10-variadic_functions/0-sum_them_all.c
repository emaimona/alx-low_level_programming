#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of args
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;
	int s = 0;

	va_start(va, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		s += va_arg(va, int);

	va_end(va);

	return (s);
}
