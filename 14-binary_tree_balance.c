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
    left_leaves = binary_tree_leaves(tree->left);
    right_leaves = binary_tree_leaves(tree->right);
    return (left_leaves - right_leaves);
}