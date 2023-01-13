#include "binary_trees.h"

/**
 * array_to_bst -  function that builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size:  is the number of element in the array
 * Return: new or NULL if faillure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *new;

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	new = binary_tree_node(NULL, array[0]);

	for (i = 1; i < size; i++)
	{
		bst_insert(&new, array[i]);
	}
	return (new);
}
