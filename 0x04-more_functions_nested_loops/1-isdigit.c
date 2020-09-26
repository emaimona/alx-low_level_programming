#include "holberton.h"

/**
 * _isdigit - check if a char is a digit
 * @c: the value to be check
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
	_putchar('\n');
}
