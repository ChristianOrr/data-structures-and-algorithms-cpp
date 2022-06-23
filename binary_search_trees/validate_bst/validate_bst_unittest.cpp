#include "validate_bst.h"

#include "gtest/gtest.h"


// Solution 1 Tests
TEST(ValidateBSTValueTestSuite, GeneralCase) {
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(13);
    root->right->left->right = new TreeNode(14);
    root->right->right = new TreeNode(22);
    EXPECT_TRUE(isValidBST(root));


    TreeNode *root1 = new TreeNode(5);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(7);
    root1->right->left = new TreeNode(4);
    root1->right->right = new TreeNode(8);
    EXPECT_FALSE(isValidBST(root1));
}