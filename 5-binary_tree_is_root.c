#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a given node is a root
* @node: pointer to the node to check
* This function determine the given node if is a root node in a binary tree.
* a node is considered a root if it has no parent node.
* @node: pointer to the node to check
*
* Return: 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
/*check if node is NULL or has dads*/
if (node == NULL || node->parent != NULL)
{
	return (0);
}

/*IF node has no parent, is root*/
return (1);
}
