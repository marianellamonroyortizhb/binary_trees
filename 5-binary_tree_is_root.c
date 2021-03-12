#include "binary_trees.h"

/**
 * binary_tree_is_root - Evaluates if note is a root
 *
 *@node: Node to evaluate
 * Return: zero
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
