#include "binary_trees.h"
/**
 * binary_tree_insert_right - New leaf lik a child.
 * @parent: Pointer
 * @value: Integer
 *
 * Return: New leaft .
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode = NULL;

	if (!parent)
		return (NULL);

	rightNode = binary_tree_node(parent, value);

	if (parent->right)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);
}
