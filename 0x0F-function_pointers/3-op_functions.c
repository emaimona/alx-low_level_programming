#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two number of integers
 * @a: first number
 * @b: the second nember
 * Return: the result of the operation
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - sub two number of integers
 * @a: first number
 * @b: the second nember
 * Return: the result of the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two number of integers
 * @a: first number
 * @b: the second nember
 * Return: the result of the operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number of integers
 * @a: first number
 * @b: the second nember
 * Return: the result of the operation
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module two number of integers
 * @a: first number
 * @b: the second nember
 * Return: the result of the operation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
