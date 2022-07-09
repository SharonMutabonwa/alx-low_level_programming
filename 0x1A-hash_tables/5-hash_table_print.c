#include "hash_tables.h"


/**
 *hash_table_print - prints a hash table.
 *@ht: is the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag++;
		}
		i++;
	}
	printf("}\n");
}
