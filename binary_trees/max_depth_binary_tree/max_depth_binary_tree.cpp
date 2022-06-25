/*
easy

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the
longest path from the root node down to the farthest leaf node.

Sample Input
tree =    3
       /     \
      9       20
            /   \
          15     7

Sample Output
3

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Example 2:
Input: root = [1,null,2]
Output: 2


Solution 1
Time Complexity: O(n), space complexity: O(h)
Strategy:
Similar to sum node depths problem.
Recursively traverse the tree using dfs.
Keep track of the current depth and max depth.
Base case: when the node is None return the max depth.
Increment the current depth by 1, then update max depth with the max of max depth and current depth.
Call dfs on the left and right nodes.
Return the max depth at the end.


Video:
https://www.youtube.com/watch?v=hTM3phVI6YQ&lc=UgxUajmaDDsmZ5Tp0U54AaABAg&ab_channel=NeetCode
*/
#include "max_depth_binary_tree.h"
#include <vector>

void dfs(std::size_t current_depth, std::size_t &max_depth, TreeNode *node) {
    if (node == nullptr) {
        return;
    }
    current_depth += 1;
    max_depth = std::max(current_depth, max_depth);
    dfs(current_depth, max_depth, node->left);
    dfs(current_depth, max_depth, node->right);
}

int maxDepth(TreeNode* root) {
    std::size_t current_depth = 0;
    std::size_t max_depth = 0;
    dfs(current_depth, max_depth, root);
    return max_depth;
}
