/*
easy

Write a function that takes in a Binary Search Tree (BST) and
a target integer value and returns the closest value to that target value contained in the BST.

You can assume that there will only be one closest value.

Each BST node has an integer value, a left child node, and a right child node.
A node is said to be a valid BST node if and only if it satisfies the BST property:
its value is strictly greater than the values of every node to its left;
its value is less than or equal to the values of every node to its right;
and its children nodes are either valid BST nodes themselves or None / null.

Sample Input
tree =   10
       /     \
      5      15
    /   \   /   \
   2     5 13   22
 /           \
1            14
target = 12
Sample Output
13

Solution 1
Time Complexity: O(log(n)), space complexity: O(n) - n is number of nodes
Strategy:
Recursive. Keep track of the closest node while traversing the tree.
Base case: return closest node if current node is None.
Check if current node is closer than closest and update the closest value if it is.
Traverse left side if target is less than current node.
Traverse right side if target is greater than current node.
Return current node if target is equal to current node.

Solution 2
Time Complexity: O(log(n)), space complexity: O(1) - n is number of nodes
Strategy:
Iterative. Keep track of the closest node while traversing the tree.
Base case: Iterate while the current node is not Null.
Check if current node is closer than closest and update the closest value if it is.
Traverse left side if target is less than current node.
Traverse right side if target is greater than current node.
Return current node if target is equal to current node.
After while loop return the closest nodes value.
*/
#include "find_closest_bst_value.h"
#include <algorithm>

int find_closest_helper(BST *node, int target, int closest) {
    if (node == nullptr)
        return closest;
    if (std::abs(target - closest) > std::abs(target - node->value)) 
        closest = node->value;
    if (node->value == target) {
        return node->value;
    } else if (node->value < target) {
        return find_closest_helper(node->right, target, closest);
    } else {
        return find_closest_helper(node->left, target, closest);
    }
}

int findClosestValueInBstSolution1(BST *tree, int target) {
    return find_closest_helper(tree, target, tree->value);
}


