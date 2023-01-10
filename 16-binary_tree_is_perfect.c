#include "binary_trees.h"


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

/**
 * binary_tree_is_perfect -  that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left != right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}