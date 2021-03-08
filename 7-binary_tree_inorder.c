#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverses in preorder and executes func.
 *     Arguments:
 *       @tree:        - Pointer to the root of the tree.
 *       @func:        - Pointer to the given function to execute.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
