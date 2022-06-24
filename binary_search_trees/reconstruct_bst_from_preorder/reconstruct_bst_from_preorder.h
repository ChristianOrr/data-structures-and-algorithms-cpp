#ifndef RECONSTRUCT_BST_FROM_PREORDER
#define RECONSTRUCT_BST_FROM_PREORDER
#include <vector>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *reconstructBstSolution1(std::vector<int> preOrder);


#endif