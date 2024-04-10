#include "binary_trees.h"

/**
 * calculate_height - Helper function to calculate height recursively
 * @tree: Pointer to the current node
 * Return: Height of the tree
 */
static size_t calculate_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return -1;

	size_t left_height = calculate_height(tree->left);
	size_t right_height = calculate_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return calculate_height(tree);
}
