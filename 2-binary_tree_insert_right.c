#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another
 *                             node.
 *        Arguments:
 *         @parent:         - Pointer to the parent node.
 *          @value:         - Value to store in the new_node.
 *
 *          Return:         - Pointer to the new_node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	/* When parent has a left node */
	if (parent->right)
	{
		/* Assing the node after new node. */
		new_node->right = parent->right;
		/* Assing next node's parent as new_node. */
		new_node->right->parent = new_node;
	}
	/* Assign the parent's right node. */
	parent->right = new_node;
	new_node->n = value;

	return (new_node);
}
