#include "binary_trees.h"

/**
 * binary_tree_is_root -  function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return:  function must return 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL && node->parent == NULL)
	{
		return (1);
	}
	else if (node->right != NULL && node->left != NULL)
	{
		return (1);
	}
	return (0);
}
