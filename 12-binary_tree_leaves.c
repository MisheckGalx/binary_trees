#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to root node of the tree
 *
 * A NULL pointer not considered a leaf
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*tree is NULL, return 0*/
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

    /* count the leaves in the left and right subtrees*/
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
