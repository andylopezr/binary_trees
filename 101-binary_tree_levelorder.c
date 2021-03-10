#include "binary_trees.h"
/**
 * binary_tree_levelorder - Traverses in levelorder and executes func.
 *       Arguments:
 *         @tree:        - Pointer to the root of the tree.
 *         @func:        - Pointer to the given function to execute.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;
	height = level_tree_height(tree);
	for (i = 0; i < height; i++)
		print_tree_level(tree, i, func);
}
/**
 * level_tree_height - Measures the height of a binary tree.
 *
 *      Arguments:
 *        @tree:      - Pointer to the root of the tree.
 *
 *        Return:     - Height of the given tree.
 */
size_t level_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = level_tree_height(tree->left);
		if (tree->right)
			r_height = level_tree_height(tree->right);
		if (l_height >= r_height)
			return (l_height + 1);
		else
			return (r_height + 1);
	}
	else
		return (0);
}
/**
 * print_tree_level - Prints the tree based on a level from a binary tree.
 *
 *    Arguments:
 *      @tree:     - Pointer to the root of the tree.
 *     @level:     - Level of the current tree.
 *      @func:     - Pointer to the given function to execute.
 */
void print_tree_level(const binary_tree_t *tree, size_t level,
		      void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print_tree_level(tree->left, level - 1, func);
		print_tree_level(tree->right, level - 1, func);
	}
}
