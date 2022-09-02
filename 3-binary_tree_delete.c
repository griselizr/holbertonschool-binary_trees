#include "binary_trees.h"

/**
 * binary_tree_delete - delete the complete binary tree
 * @tree: the tree
 * Return: if tree is null
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
