#include "dog.h"
#include <stdio.h>
/**
* init_dog - function to initialize dog structure
*@d: name of structure to init
*@name: name of the dog
*@age: age of the dog
*@owner: owner's name of the dog
*Return: Nothing
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
