#include "holberton.h"

/**
 * _isupper - check if a char is uppercase
 * @c: the value
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	_putchar('\n');
}
