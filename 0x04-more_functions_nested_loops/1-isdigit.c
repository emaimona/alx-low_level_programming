#include "holberton.h"

/**
 * _isdigit - check if a char is a digit
 * @c: the value to be check
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
