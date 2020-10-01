#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @src: the source string
 * @dest: the string to be appended
 * @n: bytes from source
 * Return: Pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	for (; *(dest + dest_len) != '\0'; dest_len++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
