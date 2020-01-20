#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add.
 * @key: key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *hold;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[i];
	if (hold != NULL)
	{
		while (hold)
		{
			if (strcmp(hold->key, key) == 0)
			{
				hold->value = strdup(value);
				return (1);
			}
			hold = hold->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[i] != NULL)
		new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
