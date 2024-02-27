#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right child node
 * @parent: pointer to the node to insert the right child
 * @value: value to store in new node
 * Return: pointer to the right child node || NULL on failure ||  parent is NULL
 * If parent already has a right child, replace it with the new node || set the old right child as the right child
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    /* Check if parent is NULL*/
    if (parent == NULL)
        return NULL;

    binary_tree_t *rightchild = malloc(sizeof(binary_tree_t));

    if (rightchild == NULL)
        return NULL;

    /*the properties of the new right child node*/
    rightchild->parent = parent;
    rightchild->n = value;
    rightchild->left = NULL;
    rightchild->right = parent->right;

    parent->right = rightchild;

    if (rightchild->right)
    {
        rightchild->right->parent = rightchild;
    }

    return rightchild;
}
