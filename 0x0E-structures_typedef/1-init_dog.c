#include "dog.h"
/**
  * init_dog - initalize the variable of struct dog
  * @d: pointer
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
