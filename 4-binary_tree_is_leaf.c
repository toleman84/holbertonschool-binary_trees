#include "binary_trees.h"

/**
 * binary_tree_is_leaf - that checks if a node is a leaf
 * @node: pointer to the node to check.
 *
 * Return: 0 If node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
        /*Where node is a pointer to the node to check*/

        /*If node is NULL, return 0*/
        if (node == NULL)
        {
            return (0);
        }

        /*Your function must return 1 if node is a leaf, otherwise 0*/
        if (!node->right && !node->left)
        {
                return (1);
        }
        else
        {
                return (0);
        }

        return (0);
}
