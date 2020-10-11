#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: args counter
 * @argv: args vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c = 1, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
	for (; c <= argc && argv[argc] == '\0'; c++)
	{
		if (!isdigit(argv[c]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += argv[v];
	}
	printf("%d\n", sum);
	return (0);
	}
}
