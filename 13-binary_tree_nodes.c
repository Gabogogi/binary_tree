#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree with at least one child.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: If tree is NULL, the function returns 0. Otherwise, it returns the count of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree)
    {
        nodes += (tree->left || tree->right) ? 1 : 0;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
    }
    return (nodes);
}
