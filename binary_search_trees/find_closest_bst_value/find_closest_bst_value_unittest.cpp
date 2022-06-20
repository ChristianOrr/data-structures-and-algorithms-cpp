#include "find_closest_bst_value.h"
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(FindClosestBSTValueTestSuite, GeneralCase) {
    BST *root = new BST(10);
    root->left = new BST(5);
    root->left->left = new BST(2);
    root->left->left->left = new BST(1);
    root->left->right = new BST(5);
    root->right = new BST(15);
    root->right->left = new BST(13);
    root->right->left->right = new BST(14);
    root->right->right = new BST(22);
    int expected = 13;
    int actual = findClosestValueInBstSolution1(root, 12);
    EXPECT_EQ(expected, actual);
}