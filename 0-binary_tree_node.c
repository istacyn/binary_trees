#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: Pointer to the parent node of the node to be created
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}