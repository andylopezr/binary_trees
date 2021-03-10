#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - 1 if given tree is complete, 0 otherwise.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index = 0, nodes = 0;

	if (!tree)
		return (0);
	nodes = count_nodes(tree);
	return (complete_recursion(tree, index, nodes));
}
/**
 * complete_recursion - Recursive auxiliary function to check if complete
 *                       binary tree.
 *      Arguments:
 *        @tree:      - Pointer to the root of the binary tree.
 *        @index:     - Current index count.
 *        @nodes:     - Total number of nodes.
 *
 *        Return:     - 1 if complete, 0 otherwise.
 */

int complete_recursion(const binary_tree_t *tree, size_t index, size_t nodes)
{
	if (!tree)
		return (1);

	/* If its a complete node. */
	if (index >= nodes)
		return (0);

	/* Return only if both nodes still exist */
	return (complete_recursion(tree->left, 2 * index + 1, nodes) &&
		complete_recursion(tree->right, 2 * index + 2, nodes));
}
/**
 * count_nodes - Counts the nodes in a binary tree.
 *
 *  Arguments:
 *    @tree:   - Pointer to the root of the binary tree.
 *
 *    Return:  - Number of nodes in the tree.
 */

size_t count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
