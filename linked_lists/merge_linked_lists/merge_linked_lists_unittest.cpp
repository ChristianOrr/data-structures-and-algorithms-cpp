#include "merge_linked_lists.h"
#include <vector>
#include "gtest/gtest.h"

LinkedList *addMany(LinkedList *ll, std::vector<int> values) {
    LinkedList *current = ll;
    while (current->next != nullptr) {
        current = current->next;
    }
    for (auto value : values) {
        current->next = new LinkedList(value);
        current = current->next;
    }
    return ll;
}

std::vector<int> getNodesInArray(LinkedList *ll) {
    std::vector<int> nodes;
    LinkedList *current = ll;
    while (current != nullptr) {
        nodes.push_back(current->value);
        current = current->next;
    }
    return nodes;
}


// Solution 1 Tests
TEST(ReverseLinkedListTestSuite, GeneralCase) {
    LinkedList *list1 = new LinkedList(2);
    addMany(list1, {6, 7, 8});
    LinkedList *list2 = new LinkedList(1);
    addMany(list2, {3, 4, 5, 9, 10});
    LinkedList *output = mergeLinkedListsSolution1(list1, list2);
    std::vector<int> expectedNodes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(getNodesInArray(output), expectedNodes);

    list1 = new LinkedList(1);
    list2 = new LinkedList(0);
    output = mergeLinkedListsSolution1(list1, list2);
    expectedNodes = {0, 1};
    EXPECT_EQ(getNodesInArray(output), expectedNodes);

    list1 = new LinkedList(1);
    list2 = new LinkedList(2);
    output = mergeLinkedListsSolution1(list1, list2);
    expectedNodes = {1, 2};
    EXPECT_EQ(getNodesInArray(output), expectedNodes);
}

