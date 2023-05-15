#include "binary_trees.h"

/**
 * find_depth - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: depth of.
 */

int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: tree_is_perfect
 */

int tree_is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (tree_is_perfect(tree->left, depth, level + 1) &&
			tree_is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = find_depth(tree);

	return (tree_is_perfect(tree, depth, 0));
}
