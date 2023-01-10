#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    // If empty tree
    if (tree == NULL)
        return 0;

    // If leaf node
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    // If both left and right are not NULL, and left & right subtrees
    // are full
    if ((tree->left) && (tree->right))
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    // We reach here when none of the above if conditions work
    return (0);
}