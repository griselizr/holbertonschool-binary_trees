#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to node
 * Return: 1 if found a leaf or 0 if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->right == NULL && node->left == NULL)
		{
			return (1);
		}
	}
	return (0);
}
