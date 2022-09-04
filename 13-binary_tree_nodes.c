#include "binary_trees.h"

/**
 *binary_tree_nodes - counts nodes
 *@tree: root node of the tree to count the number of nodes
 *Return: size or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
