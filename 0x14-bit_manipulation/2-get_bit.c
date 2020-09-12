#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of abit at a given index
 * @n: The decimal number
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	mask = 1;
	s_index = 0;

	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			if ((mask & n) == 0)
				return (0);
			else
				return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
