#include "binary_trees.h"

/**
 * binary_tree_depth - that measures the depth of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the number of the parent
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
	{
		return (0);
	}
	while (tree->parent)
	{
		tree = tree->parent;
		i++;
	}
	return (i);
}
