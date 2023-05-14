#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild_right = NULL;

	if (!parent)
	{
		return (NULL);
	}

	newChild_right = binary_tree_node(parent, value);
	if (newChild_right == NULL)
	{
		return (NULL);
	}

    if (newChild_right)
	{
		newChild_right->right = parent->right;
		if (parent->right)
			parent->right->parent = newChild_right;
		parent->right = newChild_right;
	}

	return (newChild_right);
}
