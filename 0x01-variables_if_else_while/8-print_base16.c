#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
