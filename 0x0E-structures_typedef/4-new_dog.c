#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
