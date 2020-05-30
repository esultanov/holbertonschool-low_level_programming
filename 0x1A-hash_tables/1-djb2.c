#include "hash_tables.h"
/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: size.
 * Return: a pointer to the newly created hash table.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int unsigned_i;
	int i;

	unsigned_i = 5381;
	while ((i = *str++))
		unsigned_i = ((unsigned_i << 5) + unsigned_i) + i;

	return (unsigned_i);
}
