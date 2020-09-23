#include <holberton.h>

/**
 * _abs - computes the absolute value
 * @v: value that will be changed
 * Return: the absolute value
 */

int _abs(int v)
{
	int r;

	if (v >= 0)
		r = v;
	else
		r *= -1;
	return (r);
}
