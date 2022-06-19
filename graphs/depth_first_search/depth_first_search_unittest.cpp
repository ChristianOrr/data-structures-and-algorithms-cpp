#include "depth_first_search.h"
#include <vector>
#include <string>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(DFSTestSuite, GeneralCase) {
    Node graph("A");
    graph.addChild("B")->addChild("C")->addChild("D");
    graph.children[0]->addChild("E")->addChild("F");
    graph.children[2]->addChild("G")->addChild("H");
    graph.children[0]->children[1]->addChild("I")->addChild("J");
    graph.children[2]->children[0]->addChild("K");

    std::vector<std::string> expected{"A", "B", "E", "F", "I", "J",
                                      "C", "D", "G", "K", "H"};
    std::vector<std::string> inputArray{};

    EXPECT_EQ(graph.depthFirstSearch(&inputArray), expected);
}