#include "binary_trees.h"

/**
 * binary_tree_rotate_left - that performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return:  a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	newww = tree->right;

	if (newww->left == NULL)
	{
		newww->left = tree;
		tree->right = NULL;
	}
	else
	{

		tree->right = newww->left;
		newww->left = tree;
	}
	tree->parent = newww;

	return (newww);
}
