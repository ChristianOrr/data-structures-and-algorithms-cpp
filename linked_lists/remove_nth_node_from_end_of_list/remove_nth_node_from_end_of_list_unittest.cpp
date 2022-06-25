#include "remove_nth_node_from_end_of_list.h"
#include <vector>
#include "gtest/gtest.h"


class TestLinkedList : public ListNode {
public:
    TestLinkedList() : ListNode() {}
    TestLinkedList(int value) : ListNode(value) {}

    std::vector<int> getNodesInArray() {
        std::vector<int> nodes{};
        ListNode *current = this;
        while (current != nullptr) {
            nodes.push_back(current->val);
            current = current->next;
        }
        return nodes;
    }

    void addMany(std::vector<int> values) {
        ListNode *current = this;
        while (current->next != nullptr) {
            current = current->next;
        }
        for (int value : values) {
            current->next = new ListNode(value);
            current = current->next;
        }
    }

};


// Solution 1 Tests
TEST(RemoveNthNodeFromEndOfListTestSuite, GeneralCase) {
    TestLinkedList test(0);
    test.addMany({1, 2, 3, 4, 5, 6, 7, 8, 9});
    TestLinkedList expected(0);
    expected.addMany({1, 2, 3, 4, 5, 7, 8, 9});
    removeNthFromEnd(&test, 4);
    EXPECT_EQ(test.getNodesInArray(), expected.getNodesInArray());

    TestLinkedList test2(1);
    test2.addMany({2});
    TestLinkedList expected2(1);
    removeNthFromEnd(&test2, 1);
    EXPECT_EQ(test2.getNodesInArray(), expected2.getNodesInArray());
}

