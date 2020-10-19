#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - initilizes a variable of type struct dog
 * @d: the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

			if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);


		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
