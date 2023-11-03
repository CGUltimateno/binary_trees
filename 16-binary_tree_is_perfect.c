#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_leaves, right_leaves;
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    left_leaves = binary_tree_is_perfect(tree->left);
    right_leaves = binary_tree_is_perfect(tree->right);
    if (left_leaves == 0 || right_leaves == 0)
        return (0);
    if (binary_tree_balance(tree) == 0)
        return (1);
    return (left_leaves && right_leaves);
}
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
    left_leaves = binary_tree_height(tree->left);
    right_leaves = binary_tree_height(tree->right);
    return (left_leaves - right_leaves);
}
/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: height in the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left, right;
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (0);
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);
    if (left > right)
        return (left + 1);
    else
        return (right + 1);
}