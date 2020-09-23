#include "holberton.h"

/**
 * _abs - computes the absolute value
 * @v: value that will be changed
 * Return: the absolute value
 */

int _abs(int v)
{
	int r = 0;

	if (v >= 0)
		r = v;
	else
		r = r * (-1);
	return (r);
}
