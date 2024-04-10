#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent == NULL)
		return (NULL);

	grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		if (grandparent->right)
			return (grandparent->right);
	}
	else
	{
		if (grandparent->left)
			return (grandparent->left);
	}

	return (NULL);
}
