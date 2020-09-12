#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to get from one
 * number to another.
 * @n: The number
 * @m: The destiny
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num;

	num = n ^ m;

	while (num > 0)
	{
		if ((num & 1) != 0)
			count++;
		num = num >> 1;
	}
	return (count);
}
