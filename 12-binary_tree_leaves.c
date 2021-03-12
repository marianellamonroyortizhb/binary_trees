#include "binary_trees.h"

/**
 * binary_tree_leaves - Leaves binary in a tree
 * @tree: Tree
 * Return: Counter of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
	}

	return (leaves);
}
