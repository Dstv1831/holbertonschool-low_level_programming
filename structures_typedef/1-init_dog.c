#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize
 * a variable of type struct dog
 *
 * @d: dog structure
 * @name: name attribute for dog structure
 * @age: age attribute for dog structure
 * @owner: owner attribute for dog structure
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		/* Either way is ok "(*d)." and "d->" */

		(*d).name = name;
		d->owner = owner;
		d->age = age;
	}
}
