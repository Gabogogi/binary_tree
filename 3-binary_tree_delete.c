#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes a binary tree.
 * @tree: A pointer to the root node of the tree to be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
