/*
easy

Write a function that takes in a Binary Tree and returns a list of ints
branch sums ordered from leftmost branch sum to rightmost branch sum.

A branch sum is the sum of all values in a Binary Tree branch.
A Binary Tree branch is a path of nodes in a tree that starts at the root node and ends at any leaf node.

Each BinaryTree node has an integer value, a left child node, and a right child node.
Children nodes can either be BinaryTree nodes themselves or None / null.

Sample Input
tree =     1
        /     \
       2       3
     /   \    /  \
    4     5  6    7
  /   \  /
 8    9 10
Sample Output
[15, 16, 18, 10, 11]
// 15 == 1 + 2 + 4 + 8
// 16 == 1 + 2 + 4 + 9
// 18 == 1 + 2 + 5 + 10
// 10 == 1 + 3 + 6
// 11 == 1 + 3 + 7

Solution 1
Time Complexity: O(n), space complexity: O(n) - n is the nodes in the tree
Strategy:
Solve using depth-first search.
Create helper function for recursive call, with three arguments, node, running sum and the branch sums.
Pass the branch sums by reference, so it doesn't need to be returned.
Base case1: When node is nullptr return.
Base case2: When left and right nodes are both nullptr,
add the current value to the running sum, then append the sum to the output array and return.
Pass through the output array and running sum to the left and right nodes.
Return the output array at the end.
*/
#include "branch_sums.h"
#include <vector>


void branch_sum_helper(BinaryTree *node, unsigned running_sum, std::vector<int> &branch_sums) {
    if (node == nullptr) 
        return;

    if (node->left == nullptr && node->right == nullptr) {
        running_sum += node->value;
        branch_sums.push_back(running_sum);
        return;
    }
    branch_sum_helper(node->left, running_sum + node->value, branch_sums);
    branch_sum_helper(node->right, running_sum + node->value, branch_sums);
}

std::vector<int> branchSums(BinaryTree *root) {
    std::vector<int> sums;
    branch_sum_helper(root, 0, sums);
    return sums;
}

