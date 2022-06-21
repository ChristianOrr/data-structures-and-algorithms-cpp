#include "invert_binary_tree.h"
#include "gtest/gtest.h"


bool compareBT(BinaryTree *a, BinaryTree *b) {
    if (a == nullptr && b == nullptr) {
        return true;
    }
    if (a != nullptr && b != nullptr) {
        return a->value == b->value && compareBT(a->left, b->left) &&
            compareBT(a->right, b->right);
    }
    return false;
}


// Solution 1 Tests
TEST(InvertBinaryTreeTestSuite, GeneralCase) {
    BinaryTree tree(1);
    tree.insert({2, 3, 4, 5, 6, 7, 8, 9});
    invertBinaryTreeSolution1(&tree);
    BinaryTree invertedTree(1);
    invertedTree.invertedInsert({2, 3, 4, 5, 6, 7, 8, 9});
    EXPECT_EQ(compareBT(&tree, &invertedTree), 1);
}

