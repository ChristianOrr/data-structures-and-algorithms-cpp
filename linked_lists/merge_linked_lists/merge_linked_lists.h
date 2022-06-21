#ifndef MERGE_LINKED_LIST
#define MERGE_LINKED_LIST


class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *mergeLinkedListsSolution1(LinkedList *headOne, LinkedList *headTwo);


#endif