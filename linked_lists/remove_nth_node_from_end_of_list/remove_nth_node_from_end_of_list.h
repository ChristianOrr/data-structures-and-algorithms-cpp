#ifndef REMOVE_NTH_NODE_FROM_END_OF_LIST
#define REMOVE_NTH_NODE_FROM_END_OF_LIST


class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n);


#endif
