#include "binary_trees.h"
/**
 * binary_tree_balance - Counts the leaves in a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Balance factor of give tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, balance = 0;

	if (tree)
	{
		if (tree->left)
			l_height = binary_tree_balance(tree->left) + 1;
		if (tree->right)
			r_height = binary_tree_balance(tree->right) + 1;
		balance = l_height - r_height;
		return (balance);
	}
	else
		return (0);
}
