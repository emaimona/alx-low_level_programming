#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @v: value of the digit
 * Return: the last digit
 */

int print_last_digit(int v)
{
	int r = 0;

	if (v < 0)
		r = (v % 10) * -1;
	else
		r = v % 10;
	_putchar(r + '0');
	return (r);
}
