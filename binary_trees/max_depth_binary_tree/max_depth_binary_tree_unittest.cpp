#include "max_depth_binary_tree.h"

#include "gtest/gtest.h"



// Solution 1 Tests
TEST(MaxDepthBinaryTreeTestSuite, GeneralCase) {
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    EXPECT_EQ(maxDepth(root), 3);

    TreeNode *root1 = new TreeNode(1);
    root1->right = new TreeNode(2);
    EXPECT_EQ(maxDepth(root1), 2);
}

