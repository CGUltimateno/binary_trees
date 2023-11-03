#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_leaves, right_leaves;
if (tree == NULL)
return (0);
left_leaves = binary_tree_size(tree->left);
right_leaves = binary_tree_size(tree->right);
return (left_leaves + right_leaves + 1);
}
