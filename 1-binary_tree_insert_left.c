#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node of left of the tree
 * @parent: node root
 * @value: key to add new node
 * Return: address of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *addleft = NULL;

	if (parent == NULL)
		return (NULL);

	addleft = binary_tree_node(parent, value);

	if (addleft == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = addleft;
		addleft->left = parent->left;
	}
		parent->left = addleft;

		return (addleft);
}
