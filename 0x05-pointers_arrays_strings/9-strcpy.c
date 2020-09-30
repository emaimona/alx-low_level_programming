#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to
 * @dest: the buffer pointed to
 * @src: the string to be copied
 * Return: the value of @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
