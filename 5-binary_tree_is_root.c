#include "binary_trees.h"

/**
 * binary_tree_is_root - checks node is the root of the tree
 * @node: a pointer to the node to check
 * Return: one if the node is the root || otherwise 0
 * if node is NULL return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    if (node->parent == NULL)
        return 1;

    return 0;
}
