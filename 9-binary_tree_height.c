#include "binary_trees.h"

/**
 * binary_tree_height - t measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: if tree func is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sideright = 0, sideleft = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

	sideleft = binary_tree_height(tree->left);
	sideright = binary_tree_height(tree->right);

	if (sideleft > sideright)
	{
		return (sideleft + 1);
	}
	else
	{
		return (sideright + 1);
	}
	}
	return (0);
}
