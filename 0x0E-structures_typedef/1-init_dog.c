#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type dog
 *
 * @d: Pointer to dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
