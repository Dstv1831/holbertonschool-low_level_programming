#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * len - Function that return the len of a string.
 *
 * @string: String to be measured
 *
 * Return: length of the string (not including '\0')
 *
 */

int len(char *string)
{
	int len = 0;

	while (*string++ != '\0')
		len++;

	return (len);

}

/**
 * copy - Function that copies the string source into another string
 *
 * @str_src: Source string
 * @str_des: Destiny string
 *
 * Return: New string copied
 *
 */

char *copy(char *str_des, char *str_src)
{
	int i = 0;

	for (i = 0; str_src; i++)
		str_des[i] = str_src[i];

	str_des[i] = '\0';

	return (str_des);

}

/**
 * new_dog - Function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: New dog structure
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len(name) + 1);

	if (new_dog->name == NULL)
		return (NULL);

	new_dog->owner = malloc(len(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);

		return (NULL);
	}

	new_dog->name = copy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = copy(new_dog->owner, owner);

	return (new_dog);
}
