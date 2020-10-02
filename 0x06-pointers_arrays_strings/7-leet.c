#include "holberton.h"

/**
 * *leet - encodes a string int 1337
 * @s: the string value
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i1 = 0, i2;
	char leet[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};

	for (; *(s + i1) != '\0'; i1++)
	{
		for (i2 = 0; i2 < 5; i2++)
		{
			if (*(s + i1) == *(leet + i2) || *(s + i1) == *(leet + i2) - 32)
			{
				*(s + i1) = *(code + i2);
			}
		}
	}
	return (s);
}
