#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left)
			lheight = 1 + binary_tree_height(tree->left);
		else
			return (1);
		if (tree->right)
			rheight = 1 + binary_tree_height(tree->right);
		else
			return (1);
		if (lheight > rheight)
			return (lheight);
		return (rheight);
	}
	return (0);
}

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

	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
