#include "binary_trees.h"

/**
 * inorder_traversal - Helper function for in-order traversal
 * @tree: Pointer to the current node
 * @func: Pointer to the function to call for each node
 */
void inorder_traversal(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	inorder_traversal(tree->left, func);
	func(tree->n);
	inorder_traversal(tree->right, func);
}

/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	inorder_traversal(tree, func);
}
