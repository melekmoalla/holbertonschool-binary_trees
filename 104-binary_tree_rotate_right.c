#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return:  a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	ne = tree->left;

	if (ne->right == NULL)
	{
		ne->right = tree;
		tree->left = NULL;
	}
	else
	{
		tree->left = NULL;
		tree->left = ne->right;
		ne->right = NULL;
		ne->right = tree;
	}
	tree->parent = ne;

	return (ne);
}
