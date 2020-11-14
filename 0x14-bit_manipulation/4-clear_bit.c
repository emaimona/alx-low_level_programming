#include "holberton.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: The number to set
 * @index: index at which to set it
 *
 * Return: 1 if worked, 0 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;

	return (1);
}
