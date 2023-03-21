#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Return: Pointer to dog, or NULL if function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1, len2, cntr;

	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	while (name[len1] != '\0')
	{
		len1++;
	}
	len1++;

	(*dog).name = malloc(sizeof(char) * len1);
	
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (cntr = 0; cntr < len1; cntr++)
	{
		(*dog).name[cntr] = name[cntr];
	}

	(*dog).age = age;

	len2 = 0;
	while (owner[len2] != '\0')
	{
		len2++;
	}
	len2++;

	(*dog).owner = malloc(sizeof(char) * len2);

	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}

	for (cntr = 0; cntr < len2; cntr++)
	{
		(*dog).owner[cntr] = owner[cntr];
	}

	return (dog);
}
