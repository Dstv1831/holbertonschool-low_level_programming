#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *luna;

	luna = malloc(sizeof(dog_t));
	
	if (luna == NULL)
		return (NULL);

	luna->name = name;
	luna->age = age;
	luna->owner = owner;
	
	return (luna);
}
