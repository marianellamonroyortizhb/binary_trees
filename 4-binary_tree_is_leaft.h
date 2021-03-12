#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Ask if node is a leaf
 * @node: Node to evaluate
 * Return: zero
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->left && !node->right)
		return (1);

	return (0);
}
