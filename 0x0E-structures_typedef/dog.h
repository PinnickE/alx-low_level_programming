#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog structure
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Description: A struct to help initialise
 * an instance of a dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
