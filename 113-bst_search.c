#include "binary_trees.h"

/**
 * bst_search - function that searches for a value in a Binary Search Tree
 * @value: is a pointer to the root node of the BST to search
 * @tree:  is the value to search in the tree
 * Return: return a pointer to the node containing a value equals to value
 */

bst_t *bst_search(const bst_t *tree, int value)
{

	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
	{
		return ((bst_t *)tree);
	}
	if (value < tree->n)
	{
		return (bst_search(tree->left, value));
	}
	if (value > tree->n)
	{
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
