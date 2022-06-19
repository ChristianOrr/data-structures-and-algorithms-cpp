#ifndef DEPTH_FIRST_SEARCH
#define DEPTH_FIRST_SEARCH
#include <vector>
#include <string>


class Node {
public:
  std::string name;
  std::vector<Node *> children;

  Node(std::string str) { name = str; }

  std::vector<std::string> depthFirstSearch(std::vector<std::string> *array);

  Node *addChild(std::string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};



#endif