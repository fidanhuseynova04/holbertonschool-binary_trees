#include "binary_trees.h"

/**
 * postorder_traversal - Helper function for post-order traversal
 * @tree: Pointer to the current node
 * @func: Pointer to the function to call for each node
 */
void postorder_traversal(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	postorder_traversal(tree->left, func);
	postorder_traversal(tree->right, func);
	func(tree->n);
}

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	postorder_traversal(tree, func);
}
