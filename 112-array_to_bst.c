#include "binary_trees.h"
/**
 * array_to_bst - Builds a BST from an int array.
 *
 *  Arguments:
 *    @array:   - Pointer to the given array type int.
 *     @size:   - Size of the given array.
 *
 *    Return:   - Pointer to the root of the new BST.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;

	if (!array || !size)
		return (NULL);
	root = binary_tree_node(NULL, array[0]);

	while (size > 0)
	{
		bst_insert(&root, *array);
		array++;
		size--;
	}
	return (root);
}
