#include "dog.h"
/**
 * init_dog - init dog.
 * @d: dog name.
 * @name: name.
 * @age: age.
 * @owner: owner name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
