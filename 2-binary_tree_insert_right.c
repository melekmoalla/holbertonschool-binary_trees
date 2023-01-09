#include "binary_trees.h"

/**
 * binary_tree_insert_right - unction that inserts a node as the right-child
 * @parent:  is a pointer to the parent node of the node to create
 * @value:is the value to put in the new node
 * Return: new_node or NULL if failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	if (new_node->right != NULL)
	{
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
