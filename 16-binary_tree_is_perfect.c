#include "binary_trees.h"

/**
 * binary_tree_height - Binary tree height
 * @tree: Tree
 * Return: Height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	else if (left_height < right_height)
		return (right_height + 1);

	return (left_height + 1);
}

/**
 * binary_tree_balance - Check the balance of a tree.
 * @tree: Tree.
 * Return: Evaluation.
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int ll, lr;

	if (!tree)
		return (0);

	ll = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	lr = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (ll - lr);
}

/**
 * binary_tree_is_perfect - Evaluates if the tree is perfect
 * @tree: Tree
 * Return: Evaluation
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, left = 0, right = 0;

	balance = binary_tree_balance(tree);
	if (!tree)
		return (0);

	if (balance == 0)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);

		if (left == right)
			return (1);
	}
	return (0);
}
