#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the node to insert the left-child in.
 *
 * Return: nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (binary_tree_depth(tree->parent));
}
