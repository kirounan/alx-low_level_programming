#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - function that frees memory from dogs
*@d: dog to free memory of
*Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
