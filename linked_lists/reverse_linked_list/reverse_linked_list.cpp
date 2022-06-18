/*
easy

Write a function that takes in the head of a Singly Linked List, reverses the list in place
(i.e., doesn't create a brand new list), and returns its new head.

Each LinkedList node has an integer value as well as a next node pointing to the
next node in the list or to None / null if it's the tail of the list.

You can assume that the input Linked List will always have at least one node; in other words,
the head will never be None / null.

Sample Input
head = 0 -> 1 -> 2 -> 3 -> 4 -> 5 // the head node with value 0
Sample Output
5 -> 4 -> 3 -> 2 -> 1 -> 0 // the new head node with value 5

Solution 1
Time Complexity: O(n), space complexity: O(1)
Strategy:
Keep track of three consecutive nodes, previous, current, and current.next.
Initialize the previous to None and current to the head of the linked list.
Iterate through the linked list while the current node is not None.
Store the current.next node in a temp variable before breaking connection to it.
Then reverse the connection and let current.next = previous.
Then shift the previous and current pointers over before performing the following iteration.


Video:
https://www.youtube.com/watch?v=G0_I-ZF0S38&ab_channel=NeetCode
*/
#include "reverse_linked_list.h"


LinkedList *reverseLinkedList(LinkedList *head) {
  LinkedList *prev = nullptr;
  LinkedList *current = head;

  while (current != nullptr) {
    LinkedList *temp = current->next;
    current->next = prev;
    prev = current;
    current = temp; 
  }
  return prev;
}

