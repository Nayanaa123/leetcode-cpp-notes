/*
LeetCode #125 – Valid Palindrome

Problem:
Given a string s, determine if it is a palindrome.
- Ignore non-alphanumeric characters
- Ignore uppercase and lowercase differences

Example:
Input:  "A man, a plan, a canal: Panama"
Output: true

Input:  "race a car"
Output: false

Beginner Logic:
- Use two pointers (left and right)
- Move left and righttowards the center
- Skip characters that are not letters or digits
- Convert characters to lowercase before comparing

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // skip non-alphanumeric characters from left
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // skip non-alphanumeric characters from right
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // compare characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};