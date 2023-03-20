#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - function that creates a new dog (constructor)
*@name: name of the dog
*@age: age of the dog
*@owner: name of owner of the dog
*Return: the new dog created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *d_name, *d_owner;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	d_name = malloc(sizeof(char *) * (strlen(name) + 1));

	if (d_name == NULL)
	{
		free(d_name);
		free(new_dog);
		return (NULL);
	}

	d_name = strcpy(d_name, name);

	d_owner = malloc(sizeof(char *) * (strlen(owner) + 1));
	if (d_owner == NULL)
	{
		free(d_owner);
		free(d_name);
		free(new_dog);
		return (NULL);
	}

	cowner = _strcpy(d_owner, owner);

	new_dog->name = d_name;
	new_dog->age = age;
	new_dog->owner = d_owner;

	return (new_dog);
}
