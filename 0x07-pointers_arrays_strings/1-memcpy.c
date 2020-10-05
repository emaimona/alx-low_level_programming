#include "holberton.h"

/**
 * *_memcpy - a function that copies a memory area
 * @dest: the memory area to be copied
 * @src: the source
 * @n: number of bytes
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
