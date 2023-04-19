#include "dog.h"

/**
 * init_dog - that initialize a variable of type struct dog
 * @d:  pointer to structure
 * @name: dog's name pointer
 * @age: dog's age
 * @owner: pointer to the dog's owner
 *
 * Return: 0
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
