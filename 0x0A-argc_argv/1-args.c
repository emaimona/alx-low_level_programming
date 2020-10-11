#include <stdio.h>

/**
 * main - the number of args passed to it
 * @argc: args counter
 * @argv: args vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (; c < argc - 1 && argv[argc] == '\0'; c++)
		;
	printf("%d\n", c);
	return (0);
}
