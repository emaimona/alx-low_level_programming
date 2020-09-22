#include <stdio.h>
#include <unistd.h>
/**
 * main - write Holberton
 * Return: 0
 */
int main(void)
{
	write(2, "Holberton", 9);
	putchar('\n');
	return (0);
}
