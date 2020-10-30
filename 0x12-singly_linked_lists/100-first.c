#include <stdio.h>

void first(void) __atribute__((constructor));

/**
 * first - Prints befor main
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
