#include "binary_trees.h"
int avl_helper(const binary_tree_t *tree, int lesser, int greater);
/**
 * binary_tree_is_avl - Checks if a binary tree is a valid Binary Search Tree.
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *       Return:      - 1 if a valid BST, 0 otherwise.
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (avl_helper(tree, INT_MIN, INT_MAX));
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

/**
 * avl_helper - Checks if a binary tree is a valid Binary Search Tree.
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *       @lesser:     - To analyze lesser than root value.
 *      @greater:     - To analyze greater than root value.
 *       Return:      - 1 if a valid BST, 0 otherwise.
 */

int avl_helper(const binary_tree_t *tree, int lesser, int greater)
{
	size_t l_height, r_height, diff;

	if (!tree)
		return (1);
	if (tree->n >= greater || tree->n <= lesser)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	diff = l_height - r_height;
	if (diff > 1)
		return (0);
	return (avl_helper(tree->left, lesser, tree->n) &&
		avl_helper(tree->right, tree->n, greater));
}
