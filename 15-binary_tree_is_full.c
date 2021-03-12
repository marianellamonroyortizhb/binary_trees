
#include "binary_trees.h"

/**
 * binary_tree_is_full - Evaluate if tree is full
 * @tree: Tree
 * Return: Evaluation
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
		return
		(
			tree &&
			!(binary_tree_is_full(tree->left) ^
			binary_tree_is_full(tree->right))
		);
}
