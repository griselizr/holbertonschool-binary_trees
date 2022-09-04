#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if True, 0 if False
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) ==
				binary_tree_is_perfect(tree->right));
	return (0);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
