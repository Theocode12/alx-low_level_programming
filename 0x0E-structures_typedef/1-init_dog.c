#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to variable my_dog
 * @name: name of dog
 * @age: dogs age
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
