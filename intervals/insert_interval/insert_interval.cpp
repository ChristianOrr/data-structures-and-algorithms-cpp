/*
medium

You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent 
the start and the end of the ith interval and intervals is sorted in ascending order by starti. 
You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in 
ascending order by starti and intervals still does not have any 
overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

 
Example 1:
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]

Example 2:
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].

Constraints:
0 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 105
intervals is sorted by starti in ascending order.
newInterval.length == 2
0 <= start <= end <= 105


Solution 1
Time Complexity: O(n), space complexity: O(n)
Strategy:
Iterate through all the intervals.
Keep track of the current interval and the new interval.
If the new interval is less than the current interval, 
add the new interval to the back of the output and 
add the rest of the intervals after, then return the output.
If the new interval is greater than the current interval,
then add the current interval to the output and continue the iteration.
If the current and new intervals overlap then 
update the new interval to contain both the new and current intervals,
then continue the iteration.
If the loop finishes without returning, 
then add the new interval to the back of the output and return it.


Video:
https://www.youtube.com/watch?v=A8NUOmlwOlM&ab_channel=NeetCode
*/
#include "insert_interval.h"
#include <vector>


std::vector<std::vector<int>> insert(std::vector<std::vector<int>> intervals, std::vector<int> newInterval) {
    std::vector<std::vector<int>> output;

    for (unsigned i = 0; i < intervals.size(); i++) {
        std::vector<int> interval = intervals.at(i);
        if (newInterval.at(1) < interval.at(0)) {
            output.push_back(newInterval);
            output.insert(output.end(), intervals.begin() + i, intervals.end());
            return output;
        } else if (interval.at(1) < newInterval.at(0)) {
            output.push_back(interval);
        } else {
            newInterval.at(0) = std::min(newInterval.at(0), interval.at(0));
            newInterval.at(1) = std::max(newInterval.at(1), interval.at(1));
        }
    }
    output.push_back(newInterval);
    return output;
}

