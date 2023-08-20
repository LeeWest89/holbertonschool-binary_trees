#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL or tree is full 1 if not 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left == NULL || tree->right == NULL || tree->parent == NULL)
			return (0);
		else
			return (1);
	}
}
