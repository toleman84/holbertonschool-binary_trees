#include "binary_trees.h"

/*
 * binary_tree_node - function for create a new tree.
 * @parent: first member.
 * @value: second member.
 *
 * Return: a new tree.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /*new tree*/
    binary_tree_t *newTree = NULL;

    /*malloc to storage in new tree*/
    newTree = malloc(sizeof(binary_tree_t));
    if (newTree == NULL)
    {
        return (NULL);
    }

    if (parent != NULL)
    {
        newTree->parent = parent;
    }
    else
    {
        newTree->parent = NULL;
    }

    newTree->n = value;
    newTree->left = NULL;
    newTree->right = NULL;

    return (newTree);
}
