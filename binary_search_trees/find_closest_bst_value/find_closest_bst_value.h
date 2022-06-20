#ifndef FIND_CLOSEST_BST_VALUE
#define FIND_CLOSEST_BST_VALUE

class BST {
public:
    int value;
    BST *left;
    BST *right;

    BST(int val) {
        value = val;
        left = nullptr;
        right = nullptr;    
    }
    BST &insert(int val);
};

int findClosestValueInBstSolution1(BST *tree, int target);

#endif