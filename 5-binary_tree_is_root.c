#include "binary_trees.h"

/**
 * binary_tree_is_root -given node is a root
 * @node: pointer to node
 * Return: 1 if node is a root f or 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			return (1);
		}
	}
	return (0);
}
