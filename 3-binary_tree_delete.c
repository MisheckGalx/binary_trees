#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * If tree is NULL do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
    /* Check if tree is NULL*/
    if (tree == NULL)
        return;

    /* Recursively delete the left and right subtrees*/
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}
