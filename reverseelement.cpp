/*
LeetCode #344 – Reverse String
Goal:
Reverse the string in-place.

Logic:
- Use two pointers: left at start, right at end
- Swap characters
- Move pointers inward until they meet

Time Complexity: O(n)
Space Complexity: O(1)

Pattern:
- Two pointers
- String manipulation
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};