#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to the root node of the tree
 * A NULL pointer is not considered a node
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	/*if the current node has at least one child*/
	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) +
								binary_tree_nodes(tree->right) + 1);
	}

	return (0);
}
