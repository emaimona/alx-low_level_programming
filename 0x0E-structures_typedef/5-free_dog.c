#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: the pointer of the struct to be free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
