#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size:  is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
        unsigned long int long_int;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->size = size;
	for (long_int = 0; long_int < size; long_int++)
		new_hash_table->array[long_int] = NULL;
	return (new_hash_table);
}
