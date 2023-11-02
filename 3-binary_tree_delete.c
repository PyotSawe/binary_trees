#include "binary_trees.h"
/**
 *  binary_tree_delete - Func-PART that deletes a binary tree
 *
 * @tree: ptr to root node
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
