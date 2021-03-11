#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *       Return:      - 1 if a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_helper(tree, INT_MIN, INT_MAX));
}

int bst_helper(const binary_tree_t *tree, int lesser, int greater)
{
	if (!tree)
		return (1);

	if (tree->n >= greater || tree->n <= lesser)
		return (0);

	return ((bst_helper(tree->left, lesser, tree->n)) &&
		(bst_helper(tree->right, tree->n, greater)));
}
