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

	binary_tree_t *new_root = tree->right;

	if (new_root->left == NULL)
	{
		new_root->left = tree;
		tree->right = NULL;
	}
	else
	{

		tree->right = new_root->left;
		new_root->left = tree;
	}
	tree->parent = new_root;

	return (new_root);
}
