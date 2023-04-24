#include "dog.h"
/**
* new_dog - do thing
* @name: name
* @age: float
* @owner: string
* Return: NULL or struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name && owner)
	{
		ndog = malloc(sizeof(dog_t));
		if (ndog == NULL)
			return (NULL);

		ndog->name = malloc(strlen(name) + 1);
		if (ndog->name == NULL)
		{
			free(ndog);
			return (NULL);
		}

		ndog->owner = malloc(strlen(owner) + 1);
		if (ndog->owner == NULL)
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}

		ndog->name = strcpy(ndog->name, name);
		ndog->owner = strcpy(ndog->owner, owner);
		ndog->age = age;
	}
	return (ndog);
}
