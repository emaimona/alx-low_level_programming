#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: the buffer pointed to
 * @src: the string to be copied
 * @n: number of bytes
 * Return: the value of @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
