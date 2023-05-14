#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: binary_tree_height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_side = NULL;
    size_t right_side = NULL;

    if (tree == NULL)
    {
        return (0);
    }
    else
	{
		if (left_side = tree->left)
            return (1 + binary_tree_height(tree->left));
        else
            return (1);

		if (right_side = tree->right)
            return (1 + binary_tree_height(tree->right));
        else
            return (1);

		return (MAX(left_side, right_side));
	}
}