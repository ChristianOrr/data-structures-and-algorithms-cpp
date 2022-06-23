#ifndef CLIMBING_STAIRS
#define CLIMBING_STAIRS
#include <unordered_map>

inline std::unordered_map<int, int> default_hash = {{1, 1}, {2, 2}};
int climbStairs(int n, std::unordered_map<int, int> &hash = default_hash);


#endif

