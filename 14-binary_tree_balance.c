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

	if (!tree)
		return (0);
	if (tree->left)
		l_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r_height = binary_tree_height(tree->right) + 1;
	balance = l_height - r_height;
	return (balance);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Height of the given tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = binary_tree_height(tree->left) + 1;
		if (tree->right)
			r_height = binary_tree_height(tree->right) + 1;

		return (r_height >= l_height ? r_height : l_height);
	}
	else
		return (0);
}
