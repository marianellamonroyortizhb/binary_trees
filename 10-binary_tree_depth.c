#include "binary_trees.h"

/**
 * binary_tree_depth - Tree depth
 * @tree: Tree
 * Return: The depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);


	while (tree->parent)
	{
		tree = tree->parent;
		counter++;
	}

	return (counter);
}
