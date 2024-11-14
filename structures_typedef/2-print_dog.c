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

		printf("Name: %s", (*d).name);
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
	else
		continue;
		
	return (0);
}
