#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 *
 * @d: dog structure
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
