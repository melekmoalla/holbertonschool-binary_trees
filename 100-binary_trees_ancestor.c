#include "binary_trees.h"

/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: the number of the children
 */

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
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
	else
	{
		return (first->parent);
	}
	return (NULL);
}
