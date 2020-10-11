#include <stdio.h>

/**
 * main - prints the name of the command
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c = --argc;

	printf("%s\n", argv[c]);
	return (0);
}
