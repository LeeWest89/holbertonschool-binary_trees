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

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (1 + lheight);
	return (1 + rheight);
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
