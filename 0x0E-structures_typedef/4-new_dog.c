#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: returns pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	ptr->name = malloc(i);
	if (!(ptr->name))
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	ptr->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	(*ptr).owner = malloc(i);
	if (!(ptr->owner))
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		(*ptr).owner[i] = owner[i];
	(*ptr).owner[i] = '\0';
	return (ptr);
}
