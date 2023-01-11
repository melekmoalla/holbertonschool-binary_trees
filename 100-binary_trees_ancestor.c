#include "binary_trees.h"

/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: the number of the children
 */

binary_tree_t
	*
	binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tree = first->parent;
	binary_tree_t *tree1;
	
	if (first == NULL || second == NULL)
		return (NULL);

		if (first->parent != second->parent)
	{
		if (first->parent == second)
		{
			return (first->parent);
		}
		if (second->parent == first)
		{
			return (second->parent);
		}
		if (first->parent == second->parent->parent)
		{
			return (first->parent);
		}
		if (second->parent == first->parent->parent)
		{
			return (second->parent);
		}
	}
	if (first == second)
	{
		if (first->left != NULL)
		{
			return (first->left->parent);
		}
		else
			return (first->right->parent);
	}
	if (first->parent == second->left)
	{
		return (first->parent);
	}
	if (first->parent->parent == NULL)
	{
		{
			if (first->left != NULL)
			{
				return (first->left->parent);
			}
			else
				return (first->right->parent);
		}
	}

	while (tree)
	{
		tree1 = tree;
		tree = tree->parent;
	}
	return (tree1);
}
