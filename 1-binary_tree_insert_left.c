#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of a parent
 *
 * @parent: the parent node of the inserted node
 * @value: value to be stored inside new node
 *
 * Return: the newly inserted node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

if (!parent)
return (new_node);

new_node = binary_tree_node(parent, value);

if (!new_node)
return (new_node);

if (parent->left)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

parent->left = new_node;

return (new_node);
}
