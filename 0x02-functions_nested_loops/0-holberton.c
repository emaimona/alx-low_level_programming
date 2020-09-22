#include <stdio.h>
#include <unistd.h>
/**
 * main - write Holberton
 * Return: 0
 */
int main(void)
{
	write(1, "Holberton", 8);
	putchar('\n');
	return (0);
}
