#include "binary_trees.h"

/**
  * binary_tree_insert_right - function that inserts a node as the right-child of another node
  * @parent: pointer to the node to insert the right-child in
  * @value: value to store in the new node

  * Return: newnode or Null on failure
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return NULL;

	newnode = malloc(sizeof(binary_tree_t);

	if (newnode == NULL)
		return NULL;

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		temp->parent = newnode;
	}

	else
	{
		parent->right = newnode;
		newnode->right = NULL;
	}

	return newnode;
}
