#include "dog.h"
/**
* init_dog - does thing
* @d: struct
* @name: string
* @age: float
* @owner: string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
