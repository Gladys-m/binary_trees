#include "binary_trees.h"

/**
  * binary_tree_height - function that measures the height of a binary tree
  * @tree: pointer to the root node of the tree to measure the height
  * 
  * Return: height else 0 if tree is Null
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, tree_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		tree_height = left_height + 1;
	}
	else
	{
		tree_height = right_height + 1;
	}

	return tree_height;
}
