#include "find_kth_smallest_element.h"
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(FindKthSmallestElementSolution1TestSuite, GeneralCase) {
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->left->left->right = new TreeNode(3);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(17);
    root->right->right = new TreeNode(22);
    int k = 3;
    int expected = 3;
    EXPECT_EQ(findKthSmallestSolution1(root, k), expected);
}


// Solution 2 Tests
TEST(FindKthSmallestElementSolution2TestSuite, GeneralCase) {
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->left->left->right = new TreeNode(3);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(17);
    root->right->right = new TreeNode(22);
    int k = 3;
    int expected = 3;
    EXPECT_EQ(findKthSmallestSolution2(root, k), expected);
}


// Solution 3 Tests
TEST(FindKthSmallestElementSolution3TestSuite, GeneralCase) {
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->left->left->right = new TreeNode(3);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(17);
    root->right->right = new TreeNode(22);
    int k = 3;
    int expected = 3;
    EXPECT_EQ(findKthSmallestSolution3(root, k), expected);
}