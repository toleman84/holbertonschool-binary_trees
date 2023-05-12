#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node.
* @parent: Pointer to the node to insert the left-child in.
* @value: Value to store in the new node.
* Description: If parent already has a left-child, it will be replaced by the
* new node, and the old left-child will become the left-child of the new node.
* Return: Pointer to the created node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL, *old_left_child = NULL;

/* Check if parent is NULL */
if (!parent)
return (NULL);

/* Store the old left-child, if it exists */
old_left_child = parent->left;

/* Create the new node */
new_node = binary_tree_node(parent, value);
if (!new_node)
return (NULL);

/* Set the new node as the left-child of the parent */
parent->left = new_node;

/* If there was an old left-child, make it the left-child of the new node */
if (old_left_child)
{
ew_node->left = old_left_child;
old_left_child->parent = new_node;
}

/* Return a pointer to the new node */
return (new_node);
}
