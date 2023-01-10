#include "binary_trees.h"

/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: measures the balance factor of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	if (a - b > 1)
	{
		return (a - b + 1);
	}
	if (a - b < -1)
	{
		return (a - b - 1);
	}
	return (a - b + 1);
}