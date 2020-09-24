#include "holberton.h"

/**
 * print_numbers - print all number from 0 to 10
 * Return: Always 0
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');

}
