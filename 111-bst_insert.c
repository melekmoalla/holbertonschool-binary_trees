#include "binary_trees.h"

/**
 * bst_insert -  function that inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 * Return: new or NULL if faillure.
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;

	if (!tree)
		return (NULL);
	if (!*tree)
	{
		new = binary_tree_node(NULL, value);
		*tree = new;
		return (new);
	}
	temp = *tree;
	while (temp)
	{
		if (value < temp->n)
		{
			if (temp->left)
				temp = temp->left;
			else
			{
				new = binary_tree_node(temp, value);
				temp->left = new;
				return (new);
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				temp = temp->right;
			else
			{
				new = binary_tree_node(temp, value);
				temp->right = new;
				return (new);
			}
		}
		else
			return (NULL);
	}
	return (NULL);
}
