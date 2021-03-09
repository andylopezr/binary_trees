#include "binary_trees.h"
/**
 * binary_tree_sibling - Checks if a binary tree is perfect.
 *
 *     Arguments:
 *       @node:        - Pointer to the node in the tree.
 *
 *       Return:       - Pointer to the sibling node, NULL if
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node && node->parent)
	{
		if (node->parent->left && node->parent->left != node)
			sibling = node->parent->left;
		if (node->parent->right && node->parent->right != node)
			sibling = node->parent->right;
	}
	return (sibling);
}
