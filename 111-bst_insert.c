#include "binary_trees.h"
/**
 * bst_insert - Creates a binary tree node.
 *
 * Arguments:
 *   @tree:   - Pointer to the BST.
 *   @value:  - Value to store in the new_node.
 *
 *   Return:  - Pointer to the new_node.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = NULL, *parent = NULL;

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	current = *tree;
	while (current)
	{
		parent = current;
		if (current->n == value)
			return (NULL);
		if (current->n < value)
			current = current->right;
		else
			current = current->left;
	}
	if (parent->n < value)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	return (NULL);
}
