#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal of a binary tree
 * @tree: the root node of the tree
 * @func: a function to call for each node || passing the node's value as a parameter
 * tree or func is NULL do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* if tree or func is NULL*/
    if (tree == NULL || func == NULL)
        return;

    /*the left subtree in post-order*/
    binary_tree_postorder(tree->left, func);

   /* the right subtree in post-order*/
    binary_tree_postorder(tree->right, func);

    func(tree->n);
}
