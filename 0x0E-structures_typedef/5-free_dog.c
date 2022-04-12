#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: pointer to where new dog is stored on the heap
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free((*d).owner);
		free(d);
	}
}
