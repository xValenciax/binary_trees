#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the tree using post-order traversal
 *
 * @tree: tree to be traversed
 * @func: function to apply to each tree node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree | !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
