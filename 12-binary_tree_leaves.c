#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: counts the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		a = binary_tree_leaves(tree->left);
		b = binary_tree_leaves(tree->right);
	}
	return (a + b + 1);
}
