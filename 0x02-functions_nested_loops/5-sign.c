#include "holberton.h"

/**
 * print_sign - print the sign of a number  + ou -
 * @n: the number to be printed
 * Return: 0
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
