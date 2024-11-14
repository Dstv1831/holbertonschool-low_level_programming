#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: dog structure
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* Either way is ok "(*d)." and "d->" */

		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}		
}
