#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _pow - returns the values of x raised to the power y
 * @x: base number
 * @y: pow number
 *
 * Return: The result
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}


/**
 * _strlen - returns the length of a given str
 * @str: pointer to a string
 *
 * Return: The length
 */

int _strlen(const char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;

	return (i);
}


/**
 * binary_to_uint - convertes a binary number to an unsigned int
 * @b: A pointer to a str of 0 and 1 chars
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}

	return (res);
}
