#include "binary_trees.h"

// binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	node = node->parent;

	if (node->parent->left != node)
	{
		return (node->parent->left);
	}
	else
	{
		return (node->parent->right);
	}

	return (NULL);
}

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: nothing
 */
/*
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	return (NULL);

}
*/