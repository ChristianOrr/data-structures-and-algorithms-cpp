/*
easy

Write a function that takes in a string made up of brackets ((, [, {, ), ], and }) and other optional characters.
The function should return a boolean representing whether the string is balanced with regards to brackets.

A string is said to be balanced if it has as many opening brackets of a certain type as
it has closing brackets of that type and if no bracket is unmatched.
Note that an opening bracket can't match a corresponding closing bracket that comes before it, and
similarly, a closing bracket can't match a corresponding opening bracket that comes after it.
Also, brackets can't overlap each other as in [(]).

Sample Input
string = "([])(){}(())()()"
Sample Output
true // it's balanced

Solution 1
Time complexity: O(n), Space complexity: O(n)
Strategy:
Create a stack (list) to store all the opening brackets.
Create a hash-map mapping the closing brackets to the correct opening brackets.
When an opening bracket is encountered add it to the stack.
When a closing bracket is found, check if its opening bracket is at the top of the stack.
If it is, then pop it off the stack and continue, else return False.
At the end of the loop if the stack is empty return True, else return False.

Video:
https://www.youtube.com/watch?v=WTzjTskDFMg&ab_channel=NeetCode
*/
#include "valid_brackets.h"
#include <string>
#include <stack>
#include <unordered_map>


bool isValid(std::string str) {
    std::stack<char> brackets;
    std::string opening = "([{";
    std::string closing = ")]}";
    std::unordered_map<char, char> matching_brackets = {{']', '['}, {')', '('}, {'}', '{'}};

    for (char bracket: str) {
        if (closing.find(bracket) != std::string::npos) {
            if (brackets.empty()) {
                return false;
            } else if (brackets.top() == matching_brackets.at(bracket)) {
                brackets.pop();
            } else {
                return false;
            }
        } else if (opening.find(bracket) != std::string::npos) {
            brackets.push(bracket);
        }
    }
    return brackets.empty();

}