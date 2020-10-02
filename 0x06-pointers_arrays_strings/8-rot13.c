#include "holberton.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: the string value
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i1 = 0, i2;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; *(s + i1) != '\0'; i1++)
	{
		for (i2 = 0; *(input + i2) != '\0'; i2++)
		{
			if (*(s + i1) == *(input + i2))
				*(s + i1) = *(output + i2);
		}
	}

	return (s);
}
