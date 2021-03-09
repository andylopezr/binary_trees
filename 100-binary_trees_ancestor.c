#include "binary_trees.h"
/**
 * binary_tree_ancestor - Finds the lowest common ancestor of two nodes.
 *
 *     Arguments:
 *       @first:        - Pointer to first node to compare.
 *       @second:       - Pointer to second node to compare.
 *       Return:        - Pointer to the common ancestor, NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	ancestor = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = ancestor;
		first = first->parent;
	}
	return (NULL);
}
