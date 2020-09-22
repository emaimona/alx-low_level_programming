#include <stdio.h>
#include <unistd.h>
/**
 * main - write Holberton
 * Return: 0
 */
int main(void)
{
	char c[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0; i < 9; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
