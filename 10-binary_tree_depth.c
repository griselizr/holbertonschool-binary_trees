#include "binary_trees.h"

/**
 * binary_tree_depth - measure the height of a binary tree
 * @tree: pointer to root
 * Return:0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int father = 0;

	if (tree != NULL)
	{
		if (tree->parent == NULL)
			return (0);

		father = binary_tree_depth(tree->parent);
		return (father + 1);
	}
		return (0);
}
