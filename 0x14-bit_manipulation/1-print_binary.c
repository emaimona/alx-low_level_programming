#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _pow - return the power o X raised to Y
 * @x: The base
 * @y: The exponent
 *
 * Return: The power
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
 * print_binary - prints the binary representation of a number
 * @n: The number
 */

void print_binary(unsigned long int n)
{
	unsigned int res = 0;
	int exp = 10;
	int flag = 0;

	if (n == 0)
		_putchar('0');

	while (exp >= 0)
	{
		res = _pow(2, exp);
		if (n >= res)
		{
			_putchar('1');
			n -= res;
			flag = 1;
		}
		else if (n < res && flag == 1)
			_putchar('0');
		exp--;
	}
}
