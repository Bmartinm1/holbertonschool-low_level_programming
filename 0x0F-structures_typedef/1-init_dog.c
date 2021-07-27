#include "dog.h"

/**
 * init_dog - creates a description for a dog
 * @pup: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

void init_dog(struct Dog *pup, char *name, float age, char *owner)
{
  if (pup)
  {
    pup->name = name;
    pup->age = age;
    pup->owner = owner;
  }
}
