#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree.
 * @tree: A pointer to the root node of the tree to determine the height.
 *
 * Return: If tree is NULL, the function returns 0. Otherwise, it returns the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
