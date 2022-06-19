/*
easy

The Fibonacci sequence is defined as follows: the first number of the sequence is 0,
the second number is 1, and the nth number is the sum of the (n - 1)th and (n - 2)th numbers.
Write a function that takes in an integer n and returns the nth Fibonacci number.

Important note: the Fibonacci sequence is often defined with its first two numbers as F0 = 0 and F1 = 1.
For the purpose of this question, the first Fibonacci number is F0; therefore, getNthFib(1) is equal to F0,
getNthFib(2) is equal to F1, etc..


Solution 1
Time Complexity: O(2^n), space complexity: O(n)
Strategy:
Recursion, with base case, if n == 1, return 0, elif n == 2 return 1,
else return fib(n-1) + fib(n-2)

Solution 2
Time Complexity: O(n), space complexity: O(n)
Strategy:
Recursion, with same as above but store each nth value in a hash_map. Also save base cases 0 and 1 in the hash_map.

Solution 3
Time Complexity: O(n), space complexity: O(1)
Strategy:
Iterative strategy. Save last two numbers in a list, start off with the base case, last_two = [0, 1].
Set counter = 3, while counter <= n get next_fib number from adding the last two in the list.
After while loop return last element of last_two if n > 1 else return 0
*/
#include "fibonacci.h"
#include <unordered_map>
#include <utility>


int getNthFibSolution1(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return getNthFibSolution1(n - 1) + getNthFibSolution1(n - 2);
  }
}

std::unordered_map<int, int> default_hash = {{1, 0}, {2, 1}};

int getNthFibSolution2(int n, std::unordered_map<int, int>& hash) {
    if (hash.count(n) == 1) {
        return hash.at(n);
    } else {
        hash[n] = getNthFibSolution2(n - 1, hash) + getNthFibSolution2(n - 2, hash);
        return hash.at(n);
    }
}


int getNthFibSolution3(int n) {
    if (n == 1)
        return 0;
    std::pair<int, int> last_two = {0, 1};
    unsigned counter = 3;
    while (n >= counter) {
        unsigned next = last_two.first + last_two.second;
        last_two.first = last_two.second;
        last_two.second = next;
        counter += 1;
    }
    return last_two.second;
}


