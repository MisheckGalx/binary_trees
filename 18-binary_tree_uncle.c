#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of given node.
 * @node: pointer the node to find the uncle.
 * Return: pointer the uncle node & NULL on failure.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		/*NULL node, no uncle to find*/
		return (NULL);

		return (sibling(node->parent));
	{
}

/**
 * get_sibling - gets sibling node of given node.
 * @node: pointer the node to find the sibling for.
 *
 * Return: pointer the sibling node.
 */
binary_tree_t *get_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

		if (node->parent->left == node)
		return (node->parent->right);

	else
		return (node->parent->left);

}
