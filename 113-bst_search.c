#include "binary_trees.h"
/**
 * bst_search - Searches for a value in a Binary Search Tree.
 *
 *  Arguments:
 *    @tree:  - Pointer to the BST to analyze.
 *    @value: - Value to find in BST.
 *
 *    Return: - Pointer to the matching node.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (!tree)
		return (NULL);
	node = (bst_t *)tree;
	while (node)
	{
		if (node->n == value)
			return (node);
		if (node->n < value)
			node = node->right;
		else
			node = node->left;
	}
	return (NULL);
}
