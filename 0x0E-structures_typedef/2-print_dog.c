#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the information of a struct Dog.
 * @d: Pointer to the struct Dog to be printed.
 *
 * Description: This function prints the information of a struct Dog,
 * including its name, age, and owner.
 * If any element is NULL, it prints "(nil)"
 * in place of the NULL element. If d is NULL, it prints nothing.
 */
void print_dog(struct Dog *d)
{
	if (d)
	{

		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
