#include "binary_trees.h"

/**
 * binary_tree_sibling - Sibling
 * @node: Three
 * Return: Sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);

		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - Uncle
 * @node: Three
 * Return: Uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
		return (binary_tree_sibling(node->parent));

	return (NULL);
}
