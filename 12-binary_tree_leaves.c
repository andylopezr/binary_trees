#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Leaves in the given tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if  (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaves = 1;
	else
	{
		if (tree->left)
			leaves += binary_tree_leaves(tree->left);
		if (tree->right)
			leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
