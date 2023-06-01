#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
