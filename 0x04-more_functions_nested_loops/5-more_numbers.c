#include "holberton.h"

/**
 * more_numbers - print all number from 0 to 14, 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	char n = '0';
	int i = '0';

	while (i < '9')
	{
	for (; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
	i++;
	}
	_putchar('\n');

}
