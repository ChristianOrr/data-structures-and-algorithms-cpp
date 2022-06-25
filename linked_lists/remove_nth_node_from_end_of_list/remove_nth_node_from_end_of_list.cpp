/*
medium

Write a function that takes in the head of a Singly Linked List and
an integer n and removes the nth node from the end of the list.

The removal should be done in place, meaning that the original data structure should be mutated
(no new structure should be created).

Furthermore, the input head of the linked list should remain the head of the linked list after the removal is done,
even if the head is the node that's supposed to be removed.
In other words, if the head is the node that's supposed to be removed,
your function should simply mutate its value and next pointer.

You can assume that the input Linked List will always have at least two nodes and, more specifically, at least n nodes.

Each LinkedList node has an integer value as well as a next node pointing to the
next node in the list or to None / null if it's the tail of the list.

Sample Input
head = 0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 // the head node with value 0
n = 4
Sample Output
// No output required.
// The 4th node from the end of the list (the node with value 6) is removed.
0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 7 -> 8 -> 9

Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz


Solution 1
Time Complexity: O(n), space complexity: O(1)
Strategy:
Use two pointers with a gap of n + 1 between them.
Create a dummy node and link it to the head, then
set left to the dummy.
Set right pointer to the head, then shift it by n places.
The left and right pointers will now have a gap of n + 1.
Slide the left and right pointers together until 
the right pointer reaches the end.
The left pointer will now be one position before nth node from the end.
Point the lefts next pointer to the node after next.
Return the head.


Video:
https://www.youtube.com/watch?v=XVuQxVej6y8&ab_channel=NeetCode
*/
#include "remove_nth_node_from_end_of_list.h"


ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *dummy = new ListNode;
    dummy->next = head;
    ListNode *left = dummy;
    ListNode *right = head;

    while (n > 0 && right != nullptr) {
        n -= 1;
        right = right->next;
    }

    while (right != nullptr) {
        left = left->next;
        right = right->next;
    }

    left->next = left->next->next;
    return dummy->next;
}
