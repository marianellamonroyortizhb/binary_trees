#include "binary_trees.h"

/**
 * binary_tree_height - Tree height
 *
 * @tree: Tree
 * Return: Zero
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left = 0;
	size_t tree_right = 0;

	if (tree)
	{
		tree_left = tree->left ? 1 + binary_tree_height
			(tree->left) : 0;
		tree_right = tree->right ? 1 + binary_tree_height
			(tree->right) : 0;
		return ((tree_left > tree_right) ? tree_left : tree_right);
	}

	return (0);
}
