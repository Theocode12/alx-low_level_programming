#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a sturct that contain name, age and owner
 * @name: a char pointer for dogs name
 * @age: dogs age
 * @owner: a char pointer for owner of the dog
 *
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
