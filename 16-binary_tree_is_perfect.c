#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - 1 if given tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if  (!tree)
		return (0);

	/* If its a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	if (perfect_tree_height(tree->left) == perfect_tree_height(tree->right))
		/* Return only if both nodes still exist */
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
/**
 * perfect_tree_height - Measures the height of a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Height of the given tree.
 */

size_t perfect_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = perfect_tree_height(tree->left) + 1;
		if (tree->right)
			r_height = perfect_tree_height(tree->right) + 1;

		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
	else
		return (0);
}
