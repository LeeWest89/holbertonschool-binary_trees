#include "binary_trees.h"

/**
 * leaf_check - checks if the node is a leaf
 *
 * @node: the node to be checked
 * Return: 1 if leaf, 0 if not
 */

int leaf_check(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * depth - returns the depth of the node
 *
 * @tree: pointer to the root node of the tree to check
 * Return: the depth
 */

size_t depth(const binary_tree_t *tree)
{
	if (tree->parent != NULL)
		return (1 + depth(tree->parent));
	else
		return (0);
}

/**
 * leaf - leaf of binary tree
 *
 * @tree: pointer to the root node of the tree to check
 * Return: first leaf found
 */

const binary_tree_t *leaf(const binary_tree_t *tree)
{
	if (leaf_check(tree) == 1)
		return (tree);

	if (tree->left)
		return (leaf(tree->left));
	else
		return (leaf(tree->right));
}

/**
 * perfect_r - checks recursively if tree is prefect
 *
 * @tree: pointer to the root node of the tree to check
 * @depth: leaf depth
 * @level: current node level
 * Return: if tree is perfect 1, otherwise 0
 */

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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not prefect, 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (perfect_r(tree, depth(leaf(tree)), 0));
}
