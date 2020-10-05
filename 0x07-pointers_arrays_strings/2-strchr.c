#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the char c in the string s.
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == c)
			return (s + n);
	}

	return ('\0');
}
