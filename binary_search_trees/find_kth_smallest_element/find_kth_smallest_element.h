#ifndef FIND_KTH_SMALLEST_ELEMENT
#define FIND_KTH_SMALLEST_ELEMENT


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int findKthSmallestSolution1(TreeNode *tree, int k);

int findKthSmallestSolution2(TreeNode *tree, int k);

int findKthSmallestSolution3(TreeNode *tree, int k);

#endif
