/*
medium

Given the root of a binary search tree, and an integer k, 
return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

A valid BST is defined as follows:
 - The left subtree of a node contains only nodes with keys less than the node's key.
 - The right subtree of a node contains only nodes with keys greater than the node's key.
 - Both the left and right subtrees must also be binary search trees.

Sample Input
tree =   15
       /     \
      5      20
    /   \   /   \
   2     6 17   22
 /   \
1     3
k = 3
Sample Output
3

Solution 1
Time Complexity: O(n), space complexity: O(n) - 
n is the number of nodes in the tree
Strategy:
Create a sorted list of the nodes by performing
inorder traversal.
After the the inorder traversal has completed,
return the k'th smallest value in the sorted list.


Solution 2
Time Complexity: O(h + k), space complexity: O(h) - 
h is the height of the tree, k is the input parameter
Strategy:
Same as solution1, but exit inorder traversal early 
if the k'th smallest index has been reached.


Solution 3
Time Complexity: O(h + k), space complexity: O(h) - 
h is the height of the tree, k is the input parameter
Strategy:
Iterative inorder traversal.
Create a stack to contain the previous nodes traversed.
Outer loop: While the stack is not empty and 
            the current node is not null traverse the nodes.
Inner loop: While the current node is not null iterate through 
            all the left nodes and add them to the stack.
After the inner loop pop off the last element on the stack and 
increment the current index. 
If the current index is equal k, then return the current value,
otherwise traverse the right side.


Video:
https://www.youtube.com/watch?v=5LUXSvjmGCw&ab_channel=NeetCode
*/
#include "find_kth_smallest_element.h"
#include <vector>
#include <deque>


// Solution 1
void inorder1(std::vector<int> &node_list, TreeNode *node, int k) {
    if (node == nullptr) {
        return;
    }
    inorder1(node_list, node->left, k);
    node_list.push_back(node->val);
    inorder1(node_list, node->right, k);
}

int findKthSmallestSolution1(TreeNode *tree, int k) {
    std::vector<int> sorted_nodes;
    inorder1(sorted_nodes, tree, k);
    return sorted_nodes.at(k - 1);
}



// Solution 2
void inorder2(std::vector<int> &node_list, TreeNode *node, int k, int &current) {
    if (node == nullptr || k <= current) {
        return;
    }
    inorder2(node_list, node->left, k, current);
    current += 1;
    node_list.push_back(node->val);
    if (current >= k) {
        return;
    }
    inorder2(node_list, node->right, k, current);
}

int findKthSmallestSolution2(TreeNode *tree, int k) {
    std::vector<int> sorted_list;
    int cur = 0;
    inorder2(sorted_list, tree, k, cur);
    return sorted_list.at(k - 1);
}


// Solution 3
int findKthSmallestSolution3(TreeNode *tree, int k) {
    std::deque<TreeNode*> stack;
    int current = 0;
    TreeNode *node = tree;

    while (node != nullptr || !stack.empty()) {
        while (node != nullptr) {
            stack.push_back(node);
            node = node->left;
        }
        node = stack.back();
        stack.pop_back();
        current += 1;
        if (current == k) {
            return node->val;
        }
        node = node->right;
    }
}