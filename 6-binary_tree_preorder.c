#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree using pre-order traversal
 * @tree: Pointer to the node to insert the left-child in.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
