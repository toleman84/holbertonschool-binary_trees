#include "binary_trees.h"
/**
* binary_tree_delete - deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* This function recursively deletes the entire
* binary tree starting from the given root node.
*
* Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/*Delete the left subtree*/
binary_tree_delete(tree->left);

/*Delete the right subtree*/
binary_tree_delete(tree->right);

/*Delete the root node*/
free(tree);
}
