#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: root node of the tree
 * Return: tree height 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightheight,size_t leftheight = 0;

    if (tree == NULL)
        return (0);

    if (tree == left)
    size_t left_height = binary_tree_height(tree->left);
	if (tree == right)
    size_t right_height = binary_tree_height(tree->right);

    if(left_height > right_height)
	return(right_height) + 1;
}
