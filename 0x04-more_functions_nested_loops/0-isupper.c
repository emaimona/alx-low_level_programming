#include "holberton.h"

/**
 * _isupper - check if a char is uppercase
 * @c: the value
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;
	_putchar('\n');
	return (r);
}
