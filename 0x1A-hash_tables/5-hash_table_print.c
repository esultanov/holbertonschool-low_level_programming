#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hold;
	unsigned long int ui;
	int i;

	if (ht == NULL)
		return;
	printf("{");
	for (ui = 0, i = 0; ui < ht->size; ui++)
	{
		hold = ht->array[ui];
		if (hold != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", hold->key, hold->value);
			while ((hold = hold->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", hold->key, hold->value);
			}
			i = 1;
		}
	}
	printf("}\n");
}
