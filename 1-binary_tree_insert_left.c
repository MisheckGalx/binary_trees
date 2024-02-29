#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the new node
 *
 * Return: pointer to the new node || NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *leftchild;

		/*check if parent is NULL*/
		if (parent == NULL)
			return (NULL);

		leftchild = malloc(sizeof(binary_tree_t));

		/*check if memory allocation successfull*/
		if (leftchild == NULL)
			return (NULL);

		/*properties of a new left child*/
		leftchild->parent = parent;
		leftchild->n = value;
		leftchild->left = parent->left;

		/*replacing old left child if it was already there*/
		leftchild->right = NULL;

		/*point left child of parent to new left child*/
		parent->left = leftchild;

		/*set old left child as new left child if was alreay there*/
		if (leftchild->left)
		{
			leftchild->left->parent = leftchild;
		}

		return (leftchild);
}
