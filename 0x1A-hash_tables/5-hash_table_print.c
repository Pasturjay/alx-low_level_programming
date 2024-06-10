#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in
 * the order they appear in the array
 *              of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	while (ht->size > index)
	{
		head = ht->array[index];

		while (head != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
		index++;
	}
	printf("}");
}
