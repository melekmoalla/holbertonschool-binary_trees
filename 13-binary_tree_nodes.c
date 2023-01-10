#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: counts the leaves in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL && tree->parent == NULL)
	{
		a = 1;
	}
	while (tree)
	{

		if (tree->left == NULL && tree->right == NULL)
		{
			a++;
			break;
		}
		if (tree->left == NULL && tree->right != NULL)
		{
			tree = tree->right;
		}
		else if (tree->left != NULL && tree->right == NULL)
		{
			tree = tree->left;
		}
		else if (tree->left->n > tree->right->n)
		{
			a++;
			tree = tree->left;
		}
		else
		{
			a++;
			tree = tree->right;
		}
	}
	return (a);
}
