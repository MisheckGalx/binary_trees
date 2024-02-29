#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of the tree
 * A full binary tree means a node has either 0 or 2 children.
 *
 * Return: 0 if the tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*Check if the current node has no children*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/*If it has 2 children || continue checking both subtrees*/
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left)
										&& binary_tree_is_full(tree->right));
	}
	return (0);
}
