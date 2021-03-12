#include "binary_trees.h"
/**
 * binary_tree_sibling - Sibling
 * @node: Tree
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
