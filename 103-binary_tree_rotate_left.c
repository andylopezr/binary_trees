#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *      Arguments:
 *        @tree:           - Pointer to the root of the tree.
 *
 *       Return:            - Pointer to the new root.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	/* Assings the new tree's root. */
	tree->parent = tree->right;
	if (tree->right)
	{
		/* Brings the left side of the right node. */
		tree->right = tree->parent->left;
		/* Assigns left side of new root. */
		tree->parent->left = tree;
		/* Moves the tree pointer upward. */
		tree = tree->parent;
		/* Sets the NULL parent pointer again. */
		tree->parent = NULL;
	}
	return (tree);
}
