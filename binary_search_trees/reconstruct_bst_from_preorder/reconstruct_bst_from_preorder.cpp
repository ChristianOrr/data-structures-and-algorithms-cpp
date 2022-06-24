/*
medium

The pre-order traversal of a Binary Tree is a traversal technique that 
starts at the tree's root node and visits nodes in the following order:
 - Current node
 - Left subtree
 - Right subtree

Given a non-empty array of integers representing the pre-order traversal of a Binary Search Tree (BST), 
write a function that creates the relevant BST and returns its root node.

The input array will contain the values of BST nodes in the order in 
which these nodes would be visited with a pre-order traversal.

A valid BST is defined as follows:
 - The left subtree of a node contains only nodes with keys less than the node's key.
 - The right subtree of a node contains only nodes with keys greater than the node's key.
 - Both the left and right subtrees must also be binary search trees.

Sample Input
preOrderTraversalValues = [10, 4, 2, 1, 5, 17, 19, 18]
Sample Output
        10 
      /    \
     4      17
   /   \      \
  2     5     19
 /           /
1           18 

Solution 1
Time Complexity: O(n), space complexity: O(n) - 
n is the length of the input array
Strategy:
Similar to validate bst.
Use dfs to traverse the array. 
Keep track of the current node, left limit and right limit.
Base Case1: Current node is at the end of the array, return Null.
Base Case2: Current nodes value is not within the limits, return Null.
After base cases increment the current node and 
call dfs using left limit to get the left node, then use right limit to get right node.
Create a new node and assign the left and right nodes to it then return it.
*/
#include "reconstruct_bst_from_preorder.h"
#include <vector>
#include <limits>


TreeNode *dfs(std::size_t &current, std::vector<int> &pre_order, int left_value, int right_value) {
    if (current == pre_order.size()) {
        return nullptr;
    }
    int current_value = pre_order.at(current);
    if (!(left_value < current_value && current_value < right_value)) {
        return nullptr;
    }
    current += 1;
    TreeNode *left_node = dfs(current, pre_order, left_value, current_value);
    TreeNode *right_node = dfs(current, pre_order, current_value, right_value);
    TreeNode *current_node = new TreeNode(current_value, left_node, right_node);
    return current_node;
}



TreeNode *reconstructBstSolution1(std::vector<int> preOrder) {
    std::size_t current = 0;
    int left = -std::numeric_limits<int>::max();
    int right = std::numeric_limits<int>::max();

    return dfs(current, preOrder, left, right);
}

