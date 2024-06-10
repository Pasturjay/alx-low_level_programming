#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to get the value of.
 * Return: If key not found - NULL.
 * Otherwise - value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[index] != NULL)
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				break;
			}
			head = head->next;

		}
	}

	else
	{
		return (NULL);
	}
	return (head->value);
}
