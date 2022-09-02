#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node of left of the tree
 * @parent: node root
 * @value: key to add new node
 * Return: address of new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *addright = NULL;

	if (parent == NULL)
		return (NULL);

	addright = binary_tree_node(parent, value);

	if (addright == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = addright;
		addright->right = parent->right;
	}
		parent->right = addright;

		return (addright);
}
