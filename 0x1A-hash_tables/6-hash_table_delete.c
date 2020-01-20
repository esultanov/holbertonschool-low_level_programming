#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hold, *prev;
	unsigned long int i, ui;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (ui = 0, i = ht->size; ui < i; ui++)
	{
		hold = ht->array[ui];
		while (hold)
		{
			prev = hold;
			hold = hold->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
