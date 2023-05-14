#include "binary_trees.h"

/**
 * binary_tree_postorder - binary tree using post-order traversal
 * @tree: Pointer to the node to insert the left-child in.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
        func(tree->n);
	}
}
