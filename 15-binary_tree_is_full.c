#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int left_leaves, right_leaves;
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    left_leaves = binary_tree_is_full(tree->left);
    right_leaves = binary_tree_is_full(tree->right);
    if (left_leaves == 0 || right_leaves == 0)
        return (0);
    return (left_leaves && right_leaves);
}