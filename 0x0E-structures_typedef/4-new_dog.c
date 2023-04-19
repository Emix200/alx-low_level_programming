#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x1, y1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x1 = 0; name[x1]; x1++)
		;
	x1++;
	dog->name = malloc(x1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < x1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (y1 = 0; owner[y1]; y1++)
		;
	y1++;
	dog->owner = malloc(y1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < y1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
