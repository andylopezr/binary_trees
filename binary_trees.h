#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>

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
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

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

#endif /*_BINARY_TREES_H_*/
