#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @src: the source string
 * @dest: the string to be appended
 * Return: Pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, v = 0, tsrc, total;

	for (; *(src + i) != '\0'; i++)
		;
	tsrc = i;
	for (i = 0; *(dest + i) != '\0'; i++)
		;
	total = i + tsrc;
	for (; i < total; i++, v++)
		*(dest + i) = *(src + v);
	*(dest + i) = '\0';

	return (dest);
}
