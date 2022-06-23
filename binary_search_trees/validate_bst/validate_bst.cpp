/*
medium

Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:
 - The left subtree of a node contains only nodes with keys less than the node's key.
 - The right subtree of a node contains only nodes with keys greater than the node's key.
 - Both the left and right subtrees must also be binary search trees.

Sample Input
tree =   10
       /     \
      5      15
    /   \   /   \
   2     6 13   22
 /           \
1            14
Sample Output
true


Solution 1
Time Complexity: O(n), space complexity: O(d) - 
n is number of nodes, d is the depth
Strategy:
Solve using dfs on all the nodes.
Pass the left limit, right limit and current node to dfs.
Initialize left limit to -infininty and right to infininty.
Base Case1: Node is Null, return true.
Base Case2: Nodes value doesn't lie within left and right limit,
            return false.
Call dfs on left and right nodes and 
return true if both sides are true.


Video:
https://www.youtube.com/watch?v=s6ATEkipzow&ab_channel=NeetCode
*/
#include "validate_bst.h"
#include <limits>


bool dfs(TreeNode *node, int left, int right) {
    if (node == nullptr) {
        return true;
    } else if (!(left < node->val && node->val < right)) {
        return false;
    }

    return (dfs(node->left, left, node->val) && 
            dfs(node->right, node->val, right));
}


bool isValidBST(TreeNode *tree) {
    int left = -std::numeric_limits<int>::max();
    int right = std::numeric_limits<int>::max();
    return dfs(tree, left, right);
}

