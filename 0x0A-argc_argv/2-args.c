#include <stdio.h>

/**
 * main - prints all args passed to it
 * @argc: args counter
 * @argv: args vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (; c < argc && argv[argc] == '\0'; c++)
		printf("%s\n", *(argv + c));
	return (0);
}
