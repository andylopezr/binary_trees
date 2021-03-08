#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 *     Arguments:
 *        @tree:     - Pointer to the root of the tree.
 *
 *        Return:    - Depth of the given tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
