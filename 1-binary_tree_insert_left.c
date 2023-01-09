#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent:  is a pointer to the parent node of the node to create
 * @value:is the value to put in the new node
 * Return: new_node or NULL if failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	
	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = parent->left;
	if (new_node->left != NULL)
	{
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
