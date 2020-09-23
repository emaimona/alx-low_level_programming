#include "holberton.h"

/**
 * _isalpha - check if a char is alphabetic
 * @c: the value
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
