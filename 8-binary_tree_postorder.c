#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses in preorder and executes func.
 *       Arguments:
 *         @tree:        - Pointer to the root of the tree.
 *         @func:        - Pointer to the given function to execute.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
