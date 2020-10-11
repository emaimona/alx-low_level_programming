#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints the minimium number of coins to make change
 * @argc: args counter
 * @argv: args vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c[5] = {25, 10, 5, 2, 1};
	int n;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
		}
	else
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				a -= (a / c[i]) * c[i];
				n += a / c[i];
				if (a == 0)
					break;
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
