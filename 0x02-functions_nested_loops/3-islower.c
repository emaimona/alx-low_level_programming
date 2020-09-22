#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check if a char is lowercase
 * @c: the value
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (islower(c) == true)
		return (1);
	else
		return (0);
}
