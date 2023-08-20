#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if NULL else balance of the node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left && tree->right)
			return (2);

		if ((tree->left && tree->right == NULL) || (tree->left == NULL && tree->right))
			return (-1);

		if (tree->left == NULL && tree->right == NULL)
			return (0);
	}
	return (0);
}
