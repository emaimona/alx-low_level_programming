#include "holberton.h"

/**
 * *cap_string - capitalizes all words
 * @s: the string
 * Return: the capitalizes of the string
 */

char *cap_string(char *s)
{
	int i = 0;
	char c = 'a';

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != '\t' && *(s + i) != ' ' && *(s + i) != '\n' && *(s + i) != ',' && *(s + i) != ';' && *(s + i) != '.' && *(s + i) != '!' && *(s + i) != '?' && *(s + i) != '"' && *(s + i) != '(' && *(s + i) != ')' && *(s + i) != '{' && *(s + i) != '}')
		{
			if (*(s + i) >= 'A' && *(s + i) <= 'Z')
			{
				for (c = 'A'; c <= 'Z'; c++)
				{
					if (*(s + i) == c)
						*(s + i) = c + 32;
				}
			}
		}
		else
		{
			if (*(s + (i + 1)) != ' ')
			{
				for (c = 'a'; c <= 'z'; c++)
				{
					if (*(s + (i + 1)) == c)
						*(s + (i + 1)) = c - 32;
				}
			}
			else
			{
				i += 2;
				for (c = 'a'; c <= 'z'; c++)
				{
					if (*(s + i) == c)
						*(s + i) = c - 32;
				}
			}
		}
	}
	return (s);
}
