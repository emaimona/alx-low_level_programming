#include "holberton.h"

/**
 * _isupper - shows if a char is upper or not
 * @c: the value to be check
 * Return: 1 if true 0 if false
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	} else
	{
		r = 0;
	}

	return (r);
}
