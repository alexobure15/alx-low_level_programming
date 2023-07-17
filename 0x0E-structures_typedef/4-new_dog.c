#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: object of the dog
 */

	dog_t *new_dog(char *name, float age, char *owner)
	{
		int i, leng1, leng2;
		dog_t *ndog;
		char *a, *b;

		leng1 = 0;
		for (i = 0; name[i] != '\0'; i++)
			leng1++;

		leng2 = 0;
		for (i = 0; owner[i] != '\0'; i++)
			leng2++;

		ndog = malloc(sizeof(dog_t));
		if (ndog == NULL)
			return (NULL);

		a = malloc((leng1 + 1) * sizeof(char));
		if (a == NULL)
		{
			free(ndog);
			return (NULL);
		}

		for (i = 0; i < leng1; i++)
			a[i] = name[i];
		a[i] = '\0';
		ndog->name = a;
		ndog->age = age;

		b = malloc((leng2 + 1) * sizeof(char));
		if (b == NULL)
		{
			free(a);
			free(ndog);
			return (NULL);
		}

		for (i = 0; i < leng2; i++)
			b[i] = owner[i];
		b[i] = '\0';
		ndog->owner = b;
		return (ndog);
	}
