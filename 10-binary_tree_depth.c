#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: the depth of the tree or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	if (tree && tree->parent)
		d = 1 + binary_tree_depth(tree->parent);
	else
		d = 0;
	return (d);
}
