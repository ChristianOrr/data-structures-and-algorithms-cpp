/*
easy

Write a function that takes in the heads of two Singly Linked Lists that are in sorted order, respectively.
The function should merge the lists in place (i.e., it shouldn't create a brand new list) and
return the head of the merged list; the merged list should be in sorted order.

Each LinkedList node has an integer value as well as a next node pointing to the
next node in the list or to None / null if it's the tail of the list.

You can assume that the input linked lists will always have at least one node; in other words,
the heads will never be None / null.

Sample Input
headOne = 2 -> 6 -> 7 -> 8 // the head node with value 2
headTwo = 1 -> 3 -> 4 -> 5 -> 9 -> 10 // the head node with value 1
Sample Output
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 // the new head node with value 1

Solution 1
Time Complexity: O(n + m), space complexity: O(1)
Strategy:
Iterative. Traverse both linked lists using three pointers, list1, list2 and prev. Merge list2 into list1.
While both lists have not reached the end, check if list1's value is less than list2's value.
If list1 is less than list2, then shift list1 and prev,
else link prev to list2 and shift prev onto list2, then shift list2, then link prev back to list1.
If list1 completes before list2, then link prev to list2.
Then return the list1 head.

Solution 2
Time Complexity: O(n + m), space complexity: O(n + m)
Strategy:
Recursive. Create recursive helper function with three pointers, list1, list2 and prev. Merge list2 into list1.
Base Case1: list1 is Null. Link prev to list2 and return.
Base Case2: list2 is Null. Return.
If list1 is less than list2, then shift list1 and prev, and pass the lists to the recursive call.
else link prev to list2 and shift prev onto list2, then shift list2, then link prev back to list1.
After the recursive call return the list1's head.

Video:
https://www.youtube.com/watch?v=XIdigk956u0&ab_channel=NeetCode
*/
#include "merge_linked_lists.h"


LinkedList *mergeLinkedListsSolution1(LinkedList *headOne, LinkedList *headTwo) {
    LinkedList *head = new LinkedList(0); 
    LinkedList *prev = head;
    LinkedList *list1 = headOne;
    LinkedList *list2 = headTwo;
    prev->next = list1;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->value < list2->value) {
            prev = list1;
            list1 = list1->next;
        } else {
            prev->next = list2;
            prev = prev->next;
            list2 = list2->next;
            prev->next = list1;
        }
    }

    if (list1 == nullptr) {
        prev->next = list2;
    }
    return head->next;
}

