#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of the given node.
 *
 *     Arguments:
 *       @node:      - Pointer to the node in the tree.
 *
 *       Return:     - Pointer to the uncle node, NULL if not found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left &&
		    node->parent->parent->left != node->parent)
			uncle = node->parent->parent->left;
		if (node->parent->parent->right &&
		    node->parent->parent->right != node->parent)
			uncle = node->parent->parent->right;
	}
	return (uncle);
}
