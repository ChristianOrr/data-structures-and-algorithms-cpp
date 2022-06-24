#include "reconstruct_bst_from_preorder.h"
#include <vector>
#include "gtest/gtest.h"


std::vector<int> getDfsOrder(TreeNode *node, std::vector<int> &values) {
    values.push_back(node->val);
    if (node->left != nullptr) {
        getDfsOrder(node->left, values);
    }
    if (node->right != nullptr) {
        getDfsOrder(node->right, values);
    }
    return values;
}


// Solution 1 Tests
TEST(ReconstructBSTFromPreOrderElementTestSuite, GeneralCase) {
    std::vector<int> preOrderTraversalValues = {10, 4, 2, 1, 5, 17, 19, 18};
    TreeNode *tree = new TreeNode(10);
    tree->left = new TreeNode(4);
    tree->left->left = new TreeNode(2);
    tree->left->left->left = new TreeNode(1);
    tree->left->right = new TreeNode(5);
    tree->right = new TreeNode(17);
    tree->right->right = new TreeNode(19);
    tree->right->right->left = new TreeNode(18);
    std::vector<int> v1;
    std::vector<int> expected = getDfsOrder(tree, v1);
    TreeNode *actual = reconstructBstSolution1(preOrderTraversalValues);
    std::vector<int> v2;
    std::vector<int> actualDfsOrder = getDfsOrder(actual, v2);
    EXPECT_EQ(expected, actualDfsOrder);
}