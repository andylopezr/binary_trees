#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the leaves in a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Nodes in the given tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if  (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
		return (nodes);
	}
	else
		return (0);
}
