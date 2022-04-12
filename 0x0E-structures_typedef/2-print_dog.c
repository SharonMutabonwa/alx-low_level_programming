#include <stdlib.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct to print
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
