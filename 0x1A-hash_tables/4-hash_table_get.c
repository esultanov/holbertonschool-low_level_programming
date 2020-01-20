#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element, or NULL if key couldn’t.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hold;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[i];
	if (hold == NULL)
		return (NULL);
	while (strcmp(hold->key, key) != 0)
		hold = hold->next;
	if (hold == NULL)
		return (NULL);
	return (hold->value);
}
