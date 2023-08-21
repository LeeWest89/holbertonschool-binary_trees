#include "binary_trees.h"

const binary_tree_t *leaf_check(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}

size_t depth_check(const binary_tree_t *tree)
{
	if (tree->parent != NULL)
		return (depth_check(tree->parent) + 1);
	else
		return (0);
}

const binary_tree_t *leaf(const binary_tree_t *tree)
{
	if (leaf_check(tree) == 1)
		return (tree);

	if (tree->left)
		return (leaf_check(tree->left));
	else
		return (leaf_check(tree->right));
}

int perfect_r(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (leaf_check(tree))
	{
		if (level == depth)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfect_r(tree->left, depth, level + 1) &&
		perfect_r(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL or tree is perfect 1 if not 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (perfect_r(tree, depth_check(leaf_check(tree)), 0));
}
