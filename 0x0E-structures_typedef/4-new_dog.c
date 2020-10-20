#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Null if the fuction fails, dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	/*int i = 0, j = 0, k;*/

	if (name == NULL || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(name));
	if (dg->name == NULL)
		return (NULL);
	dg->name = name;

	dg->age = age;

	dg->owner = malloc(sizeof(owner));
	if (dg->owner == NULL)
		return (NULL);
	dg->owner = owner;

	return (dg);
	free(dg->name);
	free(dg->owner);
	free(dg);
}
