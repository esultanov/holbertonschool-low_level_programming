#include "hash_tables.h"
/**
 * hash_table_create - empty hash table.
 * @size: size.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hstb;
	unsigned long int ui;

	if (size == 0)
		return (NULL);
	hstb = malloc(sizeof(hash_table_t));
	if (hstb == NULL)
		return (NULL);
	hstb->array = malloc(sizeof(hash_node_t *) * size);
	if (hstb->array == NULL)
	{
		free(hstb);
		return (NULL);
	}
	hstb->size = size;
	for (ui = 0; ui < size; ui++)
		hstb->array[ui] = NULL;
	return (hstb);
}
