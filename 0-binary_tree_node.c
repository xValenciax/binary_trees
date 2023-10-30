#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node and sets its parent
 *
 * @parent: the parent node of the newly created node
 * @value: value to be stored inside new node
 *
 * Return: the newly inserted node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

new_node = malloc(sizeof(binary_tree_t));

if (!new_node)
return (new_node);

new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
new_node->n = value;

return (new_node);
}
