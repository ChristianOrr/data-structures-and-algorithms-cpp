#ifndef INVERT_BINARY_TREE
#define INVERT_BINARY_TREE
#include <vector>
#include <deque>

class BinaryTree {
public:
    int value;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(int value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;    
    }

    void insert(std::vector<int> values, int i = 0) {
    if (i >= values.size()) {
        return;
    }
    std::deque<BinaryTree *> queue;
    queue.push_back(this);
    while (queue.size() > 0) {
        BinaryTree *current = queue.front();
        queue.pop_front();
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
    this->insert(values, i + 1);
    }


    void invertedInsert(std::vector<int> values, int i = 0) {
    if (i >= values.size()) {
        return;
    }
    std::deque<BinaryTree *> queue;
    queue.push_back(this);
    while (queue.size() > 0) {
        BinaryTree *current = queue.front();
        queue.pop_front();
        if (current->right == nullptr) {
            current->right = new BinaryTree(values[i]);
            break;
        }
        queue.push_back(current->right);
        if (current->left == nullptr) {
            current->left = new BinaryTree(values[i]);
            break;
        }
        queue.push_back(current->left);
    }
    this->invertedInsert(values, i + 1);
        }
};

void invertBinaryTreeSolution1(BinaryTree *tree);

#endif