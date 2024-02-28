#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in  binary tree
 * @tree: pointer the node to measure depth
 *
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = (0);

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent)
	{
		/*if it has a parent, increment the depth*/
		depth += 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
