/*
====================================
Longest Common Prefix (LCP)
====================================

Problem:
Given an array of strings, find the longest common prefix
among all strings. If no common prefix exists, return "".

Example:
Input : ["flower", "flow", "flight"]
Output: "fl"

------------------------------------
Easy Method (Using substr)
------------------------------------
1. Take the first string as prefix.
2. Compare prefix with each string.
3. If prefix is not matching at the start,
   remove last character using substr().
4. Repeat until prefix matches or becomes empty.

------------------------------------
substr() Explanation
------------------------------------
substr(start_index, length)

Example:
string s = "flower";
s.substr(0, 4)  -> "flow"
s.substr(0, s.size()-1) -> removes last character

------------------------------------
Algorithm
------------------------------------
• prefix = first string
• For each remaining string:
    While string does not start with prefix:
        prefix = prefix.substr(0, prefix.size()-1)
• If prefix becomes empty, return ""
• Return prefix

------------------------------------
Time Complexity: O(N × M)
Space Complexity: O(1)
------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];   // take first string

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: "
         << longestCommonPrefix(strs);

    return 0;
}