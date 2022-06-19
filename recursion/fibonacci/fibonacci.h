#ifndef FIBONACCI
#define FIBONACCI
#include <unordered_map>

int getNthFibSolution1(int n);

extern std::unordered_map<int, int> default_hash;

int getNthFibSolution2(int n, std::unordered_map<int, int>& = default_hash);

int getNthFibSolution3(int n);


#endif