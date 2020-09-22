#include "holberton.h"
/**
 * print_alphabet_x10 - Write the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int c = 1;

	while (c <= 10)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	c++;
	}
}
