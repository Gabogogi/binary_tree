#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes a binary tree.
 * @tree: A pointer to the root node of the tree to be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		// Recursively delete the left and right subtrees.
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		// Free the current node.
		free(tree);
	}
}

