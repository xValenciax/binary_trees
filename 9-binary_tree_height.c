#include "binary_trees.h"

/**
 * traverse_subtree - returns the height of the subtree
 *
 * @tree: the root of the subtree
 *
 * Return: height of the subtree
 */
size_t traverse_subtree(const binary_tree_t *tree)
{
size_t left, right;
if (!tree)
return (0);

left = traverse_subtree(tree->left);
right = traverse_subtree(tree->right);

return (1 + (left > right ? left : right));
}

/**
 * binary_tree_height - returns the height of a node
 *
 * @tree: root of the subtree
 *
 * Return: height of the subtree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height = 0;

if (!tree)
return (height);

height = traverse_subtree(tree);

return (height - 1);
}
