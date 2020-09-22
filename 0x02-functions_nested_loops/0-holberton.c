#include "holberton.h"
/**
 * main - write Holberton
 * Return: 0
 */
int main(void)
{
	char c[10] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
