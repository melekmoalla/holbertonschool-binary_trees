#include "binary_trees.h"

/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: measures the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right && tree->left)
	{
		return (2);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		return (-1);
	}
	return (0);
}
