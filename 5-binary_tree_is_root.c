#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 *
 * @node: node to be checked
 *
 * Return: 1 (Success), 0 (Failure)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
int is_root = 0;

if (node && !node->parent)
is_root = 1;

return (is_root);
}
