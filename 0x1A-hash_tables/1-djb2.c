#include "hash_tables.h"
/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: size.
 * Return: a pointer to the newly created hash table.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ui;
	int i;

	ui = 5381;
	while ((i = *str++))
		ui = ((ui << 5) + ui) + i;

	return (ui);
}
