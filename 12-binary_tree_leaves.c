#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: counts the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL && tree->parent == NULL)
	{
		return (2);
	}
	if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
	{
		return (2);
	}
	else
		return (1);
}
