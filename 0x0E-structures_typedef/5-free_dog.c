#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Initialize a variable of type dog
 *
 * @d: Pointer to dog
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
	}
}
