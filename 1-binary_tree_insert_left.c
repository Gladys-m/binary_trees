#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a node as the left-child of another node
  * @parent - pointer to the parent node
  * @value - value of new node

  * Return: New node or Null if failed
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	binary_tree_t *temp = NULL;

	newnode = malloc(sizeof(binary_tree_t);
	
	if (newnode == NULL || parent == NULL)
		return NULL;

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
		temp->parent = newnode;
	}

	else
	{
		parent-left = newnode;
		newnode->left = NULL;
	}

	return (newnode);
	
}

