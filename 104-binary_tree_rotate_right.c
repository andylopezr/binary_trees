#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Performs a left-rotation on a binary tree.
 *      Arguments:
 *        @tree:           - Pointer to the root of the tree.
 *
 *       Return:            - Pointer to the new root.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	/* Assings the new tree's root. */
	tree->parent = tree->left;
	if (tree->left)
	{
		/* Brings the left side of the right node. */
		tree->left = tree->parent->right;
		if (tree->parent->right)
			tree->parent->right->parent = tree;
		/* Assigns right side of new root. */
		tree->parent->right = tree;
		/* Moves the tree pointer upward. */
		tree = tree->parent;
		/* Sets the NULL parent pointer again. */
		tree->parent = NULL;
	}
	return (tree);
}
