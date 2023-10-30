#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 *
 * @node: node to be checked
 *
 * Return: 1 (Success), 0 (Failure)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
int is_leaf = 0;

if (node && !node->left && !node->right)
is_leaf = 1;

return (is_leaf);
}
