#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses in preorder and executes func.
 *      Arguments:
 *        @tree:        - Pointer to the root of the tree.
 *        @func:        - Pointer to the given function to execute.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
