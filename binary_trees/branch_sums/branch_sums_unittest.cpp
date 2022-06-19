#include "branch_sums.h"
#include <vector>
#include "gtest/gtest.h"


class TestBinaryTree : public BinaryTree {
public:
  TestBinaryTree(int value) : BinaryTree(value){};

  BinaryTree *insert(std::vector<int> values, int i = 0) {
    if (i >= values.size())
      return nullptr;
    std::vector<BinaryTree *> queue = {this};
    while (queue.size() > 0) {
      BinaryTree *current = queue[0];
      queue.erase(queue.begin());
      if (current->left == nullptr) {
        current->left = new BinaryTree(values[i]);
        break;
      }
      queue.push_back(current->left);
      if (current->right == nullptr) {
        current->right = new BinaryTree(values[i]);
        break;
      }
      queue.push_back(current->right);
    }
    insert(values, i + 1);
    return this;
  }
};


// Solution 1 Tests
TEST(BranchSumsTestSuite, GeneralCase) {
    TestBinaryTree *tree = new TestBinaryTree(1);
    tree->insert({2, 3, 4, 5, 6, 7, 8, 9, 10});
    std::vector<int> expected = {15, 16, 18, 10, 11};
    EXPECT_EQ(branchSums(tree), expected);
}

