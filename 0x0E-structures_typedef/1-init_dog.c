#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to a struct dog
* @name: name of the dog to initialise
* @age:age of the dog to initialise
* @owner: owner of the dog to initialise
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
	{
		return (NULL):
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
