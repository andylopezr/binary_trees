#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <limits.h>

/*---------------------------------------------------------------------------*/
/*                    Given Structures and Functions.                        */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/**
 * struct binary_tree_s - Binary tree node - - - - - - - - - - - - - - - - - |
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Basic binary tree typedef. */
typedef struct binary_tree_s binary_tree_t;

/* Binary search tree typedef. */
typedef struct binary_tree_s bst_t;

/* AVL tree typedef. */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap. */
typedef struct binary_tree_s heap_t;

/*---------------------------------------------------------------------------*/
/*                            Function prototypes.                           */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* 0.1 Print function. - - - - - - - - - - - - - - - - - - - - - - - - - - - */
void binary_tree_print(const binary_tree_t *);

/* 0. Creates a binary tree node. - - - - - - - - - - - - - - - - - - - - - -*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Inserts a node as the left-child of another node. - - - - - - - - - - -*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Inserts a node as the right-child of another node. - - - - - - - - - - */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3. Deletes an entire binary tree. - - - - - - - - - - - - - - - - - - - - */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Checks if a node is a leaf. - - - - - - - - - - - - - - - - - - - - - -*/
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5. Checks if a given node is a root. - - - - - - - - - - - - - - - - - - -*/
int binary_tree_is_root(const binary_tree_t *node);

/* 6. Goes through a binary tree using pre-order traversal. - - - - - - - - -*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7. Goes through a binary tree using in-order traversal.- - - - - - - - - -*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8. Goes through a binary tree using in-order traversal.- - - - - - - - - -*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9. Measures the height of a binary tree. - - - - - - - - - - - - - - - - -*/
size_t binary_tree_height(const binary_tree_t *tree);

/* 10. Measures the depth of a node in a binary tree. - - - - - - - - - - - -*/
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Measures the size of a binary tree. - - - - - - - - - - - - - - - - - */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Counts the leaves in a binary tree. - - - - - - - - - - - - - - - - - */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13. Counts the nodes with at least 1 child in a binary tree. - - - - - - -*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14. Measures the balance factor of a binary tree. - - - - - - - - - - - - */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Checks if a binary tree is full. - - - - - - - - - - - - - - - - - - -*/
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Checks if a binary tree is perfect. - - - - - - - - - - - - - - - - - */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 16.1 Measures the height of a binary tree. - - - - - - - - - - - - - - - -*/
size_t perfect_tree_height(const binary_tree_t *tree);

/* 17. Finds the sibling of a node. - - - - - - - - - - - - - - - - - - - - -*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Finds the uncle of a node. - - - - - - - - - - - - - - - - - - - - - -*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* 19. Finds the lowest common ancestor of two nodes. - - - - - - - - - - - -*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);

/* 20. Goes through a binary tree using level-order traversal.- - - - - - - -*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* 20.1 Measures the height of a binary tree. - - - - - - - - - - - - - - - -*/
size_t level_tree_height(const binary_tree_t *tree);

/* 20.2 Prints the tree based on a level from a binary tree.- - - - - - - - -*/
void print_tree_level(const binary_tree_t *tree, size_t level,
		      void (*func)(int));

/* 21. Checks if a binary tree is complete. - - - - - - - - - - - - - - - - -*/
int binary_tree_is_complete(const binary_tree_t *tree);

/* 21.1 Recursive auxiliary function to check if complete binary tree.- - - -*/
int complete_recursion(const binary_tree_t *tree, size_t index, size_t nodes);

/* 21.2 Counts the nodes inside aq binary tree. - - - - - - - - - - - - - - -*/
size_t count_nodes(const binary_tree_t *tree);

/* 22. Performs a left-rotation on a binary tree. - - - - - - - - - - - - - -*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* 23. Performs a right-rotation on a binary tree. - - - - - - - - - - - - - */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* 24. Checks if a binary tree is a valid. - - - - - - - - - - - - - - - - - */
int binary_tree_is_bst(const binary_tree_t *tree);

/* 24.1 Checks if a binary tree is a valid. - - - - - - - - - - - - - - - - -*/
int bst_helper(const binary_tree_t *tree, int lesser, int greater);

/* 25. Inserts a value in a Binary Search Tree. - - - - - - - - - - - - - - -*/
bst_t *bst_insert(bst_t **tree, int value);

/* 26. Builds a Binary Search Tree from an array. - - - - - - - - - - - - - -*/
bst_t *array_to_bst(int *array, size_t size);

/* 27. Searches for a value in a Binary Search Tree. - - - - - - - - - - - - */
bst_t *bst_search(const bst_t *tree, int value);

/* 28. Removes a node from a Binary Search Tree. - - - - - - - - - - - - - - */
bst_t *bst_remove(bst_t *root, int value);

/* 30. Checks if a binary tree is a valid AVL Tree. - - - - - - - - - - - - -*/
int binary_tree_is_avl(const binary_tree_t *tree);

/* 31. Inserts a value in an AVL Tree. - - - - - - - - - - - - - - - - - - - */
avl_t *avl_insert(avl_t **tree, int value);

/* 32. Builds an AVL tree from an array. - - - - - - - - - - - - - - - - - - */
avl_t *array_to_avl(int *array, size_t size);

/* 33. Removes a node from an AVL tree.- - - - - - - - - - - - - - - - - - - */
avl_t *avl_remove(avl_t *root, int value);

/* 34. Builds an AVL tree from an array. - - - - - - - - - - - - - - - - - - */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* 36. Checks if a binary tree is a valid Max Binary Heap. - - - - - - - - - */
int binary_tree_is_heap(const binary_tree_t *tree);

/* 37. Inserts a value in Max Binary Heap. - - - - - - - - - - - - - - - - - */
heap_t *heap_insert(heap_t **root, int value);

/* 38. Builds a Max Binary Heap tree from an array. - - - - - - - - - - - - -*/
heap_t *array_to_heap(int *array, size_t size);

/* 39. Extracts the root node of a Max Binary Heap. - - - - - - - - - - - - -*/
int heap_extract(heap_t **root);

/* 40. Converts a Binary Max Heap to a sorted array of integers. - - - - - - */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif /*_BINARY_TREES_H_*/
