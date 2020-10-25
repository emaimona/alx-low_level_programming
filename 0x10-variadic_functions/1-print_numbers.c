#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the str to be printed between numbers
 * @n: number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list va;

	va_start(va, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}

	va_end(va);
}
