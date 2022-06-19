#ifndef BRANCH_SUMS
#define BRANCH_SUMS
#include <vector>

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

void branch_sum_helper(BinaryTree *node, unsigned running_sum, std::vector<int> &branch_sums);

std::vector<int> branchSums(BinaryTree *root);

#endif