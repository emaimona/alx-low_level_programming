#include "holberton.h"

/**
 * *_memset - write a function that fills memory with a constant byte
 * @s: the variable pointed to @n
 * @b: constant byte
 * @n: number of bytes
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) = b;

	return (s);
}
