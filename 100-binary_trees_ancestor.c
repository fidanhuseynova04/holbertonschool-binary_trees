#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
	{
		return (NULL);
	}
        if (first == second)
                return ((binary_tree_t *)first);
        if (binary_tree_depth(first) > binary_tree_depth(second))
                return (binary_trees_ancestor(first->parent, second));
        if (binary_tree_depth(second) > binary_tree_depth(first))
                return (binary_trees_ancestor(first, second->parent));
        return (binary_trees_ancestor(first->parent, second->parent));
}
