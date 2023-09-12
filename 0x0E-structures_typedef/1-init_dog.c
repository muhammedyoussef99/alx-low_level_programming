#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct Dog with provided values.
 * @d: Pointer to the struct Dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 *
 * Return: void.
 */
void init_dog(struct Dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
