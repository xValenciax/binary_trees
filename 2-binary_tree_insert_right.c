#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of a parent
 *
 * @parent: the parent node of the inserted node
 * @value: value to be stored inside new node
 *
 * Return: the newly inserted node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

if (!parent)
return (new_node);

new_node = binary_tree_node(parent, value);

if (!new_node)
return (new_node);

if (parent->right)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

parent->right = new_node;

return (new_node);
}
