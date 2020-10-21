#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function pointed to
 * @s - the pointer passed by
 */

void print_name(char *name, void (*f)(char *s))
{
	char* t;

	t = malloc(sizeof(*name));
	if (t == NULL)
		return ;
	free(t);
	t = name;
	(*f)(t);
}
