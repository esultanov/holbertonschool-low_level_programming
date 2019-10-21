#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct.
 * @name: char.
 * @age: age.
 * @owner: name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif