#include "holberton.h"

/**
 * is_prime_number - check if a number is prime
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if ((n % 2) == 0)
		return (1);
	else
		return (0);
}
