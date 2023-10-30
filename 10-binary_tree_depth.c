#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node
 *
 * @tree: node to find the depth for
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (!tree)
return (depth);

while (tree->parent)
tree = tree->parent, depth++;

return (depth);
}
