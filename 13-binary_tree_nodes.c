#include "binary_trees.h"

/**
 * binary_tree_nodes - Nodes with child
 * @tree: Tree
 * Return: Count of child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		return ((size_t)(tree->left || tree->right) +
				binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
	}

	return (0);
}
