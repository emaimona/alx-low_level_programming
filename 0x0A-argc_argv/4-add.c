#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _isnum - checks for a digit
 * @n: number to be checked
 * Return: 0 or 1
 */
int _isnum(char n[])
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (isdigit(n[i]) == 0)
			return (0);
	}
	return (1);
}

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
		for (; c < argc; c++)
		{
			if (_isnum(argv[c]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[c]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
