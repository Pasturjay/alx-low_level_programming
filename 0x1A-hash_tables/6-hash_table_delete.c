#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			temp = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = temp;
		}
	}
	free(ht->array);
	free(ht);
}
