#include "reverse_linked_list.h"
#include <vector>
#include "gtest/gtest.h"


LinkedList *newLinkedList(std::vector<int> values) {
    LinkedList *ll = new LinkedList(values[0]);
    LinkedList *current = ll;
    for (int i = 1; i < values.size(); i++) {
        current->next = new LinkedList(values[i]);
        current = current->next;
    }
    return ll;
}

std::vector<int> toArray(LinkedList *ll) {
    std::vector<int> arr = {};
    LinkedList *current = ll;
    while (current != nullptr) {
        arr.push_back(current->value);
        current = current->next;
    }
    return arr;
}

bool arraysEqual(std::vector<int> arr1, std::vector<int> arr2) {
    if (arr1.size() != arr2.size())
        return false;
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i])
        return false;
    }
    return true;
}


// Solution 1 Tests
TEST(ReverseLinkedListTestSuite, GeneralCase) {
    LinkedList *test = newLinkedList({0, 1, 2, 3, 4, 5});
    std::vector<int> result = toArray(reverseLinkedList(test));
    std::vector<int> expected = {5, 4, 3, 2, 1, 0};
    EXPECT_TRUE(arraysEqual(result, expected));
}
