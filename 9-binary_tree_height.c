#include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the number of the children
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth = -1;

	while (tree)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
		}
		else
		{
			tree = tree->right;
		}
		depth++;
	}

	return (depth);
}
