#include <stdio.h>
/**
 * main - print all number of base 10 without using type char
 * Return: 0
 */
int main(void)
{
	int n = '0';

	for (; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
