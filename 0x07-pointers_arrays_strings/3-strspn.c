#include "holberton.h"

/**
 * _strspn - gets the length of a prefix
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, t = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (; *(accept + t); t++)
		{
			if (*(s + i) == *(accept + t))
				break;
		}
		if (!*(accept + t))
			break;
	}
	return (i);
}
