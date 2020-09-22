#include <stdio.h>
#include <unistd.h>
/**
 * main - write Holberton
 * Return: 0
 */
int main(void)
{
	write(1, "Holberton\n", 9);
	return (0);
}
