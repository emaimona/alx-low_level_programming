#include <stdio.h>
/**
 * main - print all number of base 10
 * Return: 0
 */
int main(void)
{
	char n = '0';

	for (; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
