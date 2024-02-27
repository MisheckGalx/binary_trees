#include "binary_trees.h"

/**
 * binary_tree_node - Functoin to creates a binary tree node
 * @parent: pointer to the parent node of create
 * @value: Value to put in the new node
 *
 * Return: pointer to the new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode ==NULL)

	{

	/* memory failure */
        return NULL;
	}

    /* node with value but no children */
    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);
}
