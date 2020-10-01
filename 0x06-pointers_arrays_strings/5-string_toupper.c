#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to upper
 * @s: the string
 * Return: the upper of the string
 */

char *string_toupper(char *s)
{
	int i = 0;
	char c = 'a';

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				if (*(s + i) == c)
					*(s + i) = c - 32;
			}
		}
	}
	return (s);
}
