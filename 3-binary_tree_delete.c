#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent:  is a pointer to the parent node of the node to create
 * @value:is the value to put in the new node
 * Return: new_node or NULL if failure.
 */

void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *current;
    binary_tree_t *next;

    if (tree == NULL)
    {
        return;
    }

    current = tree;
    while (current != NULL)
    {
        if (current->left != NULL)
        {
            next = current->left;
            current->left = NULL;
        }
        else if (current->right != NULL)
        {
            next = current->right;
            current->right = NULL;
        }
        else
        {
            next = NULL;
        }
        free(current);
        current = next;
    }
}