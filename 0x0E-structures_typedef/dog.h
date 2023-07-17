#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - basic info of the dog
 *
 * @name: 1st member
 *
 * @age: 2nd member
 *
 * @owner: 3rd member
 *
 * Description: longr description
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
typedef struct dog dog_t;
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

