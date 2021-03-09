#include "binary_trees.h"
/**
 * binary_tree_is_full - Counts the leaves in a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - 1 if given tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if  (!tree)
		return (0);

	/* If its a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* If its a complete node. */
	if (tree->left && tree->right)
		/* Return only if both nodes still exist */
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
