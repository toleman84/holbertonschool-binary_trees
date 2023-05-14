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

    //Where parent is a pointer to the node to insert the right-child in
    //And value is the value to store in the new node
	newChild_right = binary_tree_node(parent, value);
	if (newChild_right == NULL)
	{
		return (NULL);
	}

    //If parent already has a right-child, the new node must take its place
    if (newChild_right)
	{
		newChild_right->right = parent->right;
        //the old right-child must be set as the right-child of the new node
		if (parent->right)
			parent->right->parent = newChild_right;
		parent->right = newChild_right;
	}

    //Your function must return a pointer to the created node
    //or NULL on failure or if parent is NULL
	return (newChild_right);
}
