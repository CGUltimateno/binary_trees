#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_leaves, right_leaves;
    if (tree == NULL)
        return (0);
    left_leaves = help_scale(tree->left);
    right_leaves = help_scale(tree->right);
    return (left_leaves - right_leaves);
}
/**
 * help_scale - helper function to find longest path
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: biggest side
 */
size_t help_scale(const binary_tree_t *tree)
{
    size_t left, right;
    if (tree == NULL)
        return (-1);
    left = help_scale(tree->left);
    right = help_scale(tree->right);
    return (1 + (left > right ? left : right));
}