#include "binary_trees.h"

/**
 * bst_remove -that removes a node from a Binary Search Tree
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: is the value to remove in the tree
 * Return: to the new root node of the tree after removing the desired value
 **/

bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
	{
		return (root);
	}

	if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
	}
	else
	{
		bst_t *current = root->right;

		if (root->left == NULL)
		{
			bst_t *temp = root->right;

			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}


		while (current->left != NULL)
		{
			current = current->left;
		}

		root->n = current->n;
	}
	return (root);
}
