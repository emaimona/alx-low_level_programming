#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w, y;

	for (w = '0'; w <= '9'; w++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(w);
			putchar(y);
			if (w == '9' && y == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
