#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0vif NULL else node count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left || tree->right)
			count++;
		if (tree->left)
			count += binary_tree_nodes(tree->left);
		if (tree->right)
			count += binary_tree_nodes(tree->right);
	}
	return (count);
}
