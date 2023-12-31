#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the dog
 *
 * @d: pointer to struct dog to initialize
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner the dog
 */

	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}

