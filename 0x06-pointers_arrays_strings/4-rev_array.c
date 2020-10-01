#include "holberton.h"

/**
 * reverse_array - reverses the content of an array on integers
 * @a: the array of integers
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int intBuf, i = n - 1;

	for (; i > (n - 1) / 2; i--)
	{
		if (i != (n - 1 - i))
		{
			intBuf = *(a + i);
			*(a + i) = *(a + (n - 1 - i));
			*(a + (n - 1 - i)) = intBuf;
		}
		else
			break;
	}
}
