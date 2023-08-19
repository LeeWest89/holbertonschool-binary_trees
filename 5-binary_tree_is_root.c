#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is left or 0 for NULL or not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || (node->left == NULL || node->right == NULL))
		return (0);

	else
		return (1);
}
