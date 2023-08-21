#include "binary_trees.h"

/**
 * is_full_of_something - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL or tree is full 1 if not 0
 */

int is_full_of_something(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_of_something(tree->left) == 0 ||
		    is_full_of_something(tree->right) == 0)
			return (0);
	}
	return (1);
}

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
	return (is_full_of_something(tree));
}
