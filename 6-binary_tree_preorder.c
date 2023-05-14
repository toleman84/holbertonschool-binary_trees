#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree using pre-order traversal
 * @tree: Pointer to the node to insert the left-child in.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL && func == NULL)
    {
        return;
    }
    else
    {
        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
    }
}
