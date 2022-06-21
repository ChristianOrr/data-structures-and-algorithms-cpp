/*
easy

Write a function that takes in a Binary Tree and inverts it.
In other words, the function should swap every left node in the tree for its corresponding right node.

Each BinaryTree node has an integer value, a left child node, and
a right child node. Children nodes can either be BinaryTree nodes themselves or None / null.

Sample Input
tree =    1
       /     \
      2       3
    /   \   /   \
   4     5 6     7
 /   \
8     9
Sample Output
       1
    /     \
   3       2
 /   \   /   \
7     6 5     4
            /   \
           9     8

Solution 1
Time Complexity: O(n), space complexity: O(d)
Strategy:
Recursion. Alter the tree in-place.
Base Case: Return if node is Null.
Swap the left and right tree nodes,
then call dfs on the left and right nodes to recursively swap the children nodes.
No need to return anything as the tree was altered in-place.

Solution 2
Time Complexity: O(n), space complexity: O(n)
Strategy:
Iterative. Alter the tree in place.
Create a queue and initialize it with the root node.
Iterate over the queue's elements while it is not empty.
Set the current node to the node at the front of the queue.
Swap the current nodes left and right nodes,
then add the left and right nodes to the back of the queue.
No need to return anything as the tree was altered in-place.

Video:
https://www.youtube.com/watch?v=OnSn2XEQ4MY&ab_channel=NeetCode
*/
#include "invert_binary_tree.h"




void invertBinaryTreeSolution1(BinaryTree *tree) {
    if (tree == nullptr) {
        return;
    }
    BinaryTree *temp = tree->left;
    tree->left = tree->right;
    tree->right = temp;

    invertBinaryTreeSolution1(tree->left);
    invertBinaryTreeSolution1(tree->right); 

}


