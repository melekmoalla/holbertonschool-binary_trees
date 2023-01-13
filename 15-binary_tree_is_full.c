#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		if ((tree->left->left == NULL && tree->left->right == NULL) && (tree->right->left == NULL && tree->right->right == NULL))
			return (1);
	}
	return (0);
}
