/*
medium

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), 
return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.

 
Example 1:
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

Example 2:
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
 
Constraints:
m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.


Solution 1
Time Complexity: O(n), space complexity: O(n)
Strategy:
Iterate over the grid to find an island, then
use breadth first search to find all the coordinates part of the 
same island from its immediate neighbours.
After bfs completes, continue searching the grid for more islands,
once a new island (not part of visited) is found increment num islands and 
perform bfs again to find all the connected land.
Once the grid search completed return the num islands.


Video:
https://www.youtube.com/watch?v=pV2kpPD66nE&ab_channel=NeetCode
*/
#include "number_of_islands.h"
#include <vector>
#include <set>
#include <deque>


void bfs(int i, int j, std::set<std::pair<int, int>> &visited, std::vector<std::vector<char>> &grid) {
    std::deque<std::pair<int, int>> queue;
    visited.insert({i, j});
    queue.push_back({i, j});
    while (!queue.empty()) {
        std::pair<int, int> next_coord = queue.front();
        queue.pop_front();
        std::vector<std::pair<int, int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        for (auto direction: directions) {
            std::pair<int, int> new_coord = {direction.first + next_coord.first, direction.second + next_coord.second};
            if (0 <= new_coord.first && new_coord.first < grid.size() &&
                0 <= new_coord.second && new_coord.second < grid.at(0).size() &&
                visited.count(new_coord) == 0 && 
                grid.at(new_coord.first).at(new_coord.second) == '1') {
                queue.push_back(new_coord);
                visited.insert(new_coord);
            }
        }

    }
}


int numIslands(std::vector<std::vector<char>> &grid) {
    int num_islands = 0;
    std::set<std::pair<int, int>> visited;

    for (std::size_t i = 0; i < grid.size(); i++) {
        for (std::size_t j = 0; j < grid.at(0).size(); j++) {
            char value = grid.at(i).at(j);
            std::pair<int, int> coord = std::make_pair(i, j);
            if (value == '1' && visited.count(coord) != 1) {
                bfs(i, j, visited, grid);
                num_islands += 1;
            }
        }
    }
    return num_islands;
    
}

