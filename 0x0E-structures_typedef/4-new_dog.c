#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - init dog.
 * @name: name.
 * @age: age.
 * @owner: owner name.
 * Return: struct got.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *got;
	char *n, *o;
	int in, on, g;

	got = malloc(sizeof(struct dog));
	if (got == NULL)
		return (NULL);
	for (in = 0; name[in] != '\0'; in++)
		;
	for (on = 0; owner[on] != '\0'; on++)
		;
	n = malloc(in + 1);
	if (n == NULL)
	{
		free(got);
		return (NULL);
	}
	o = malloc(on + 1);
	if (o == NULL)
	{
		free(n);
		free(got);
		return (NULL);
	}
	for (g = 0; g <= in; g++)
		n[g] = name[g];
	for (g = 0; g <= on; g++)
		o[g] = owner[g];
	got->name = n;
	got->age = age;
	got->owner = o;
	return (got);
}
