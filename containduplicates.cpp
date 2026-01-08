/*
LeetCode #217 – Contains Duplicate
Beginner Approach (Using for loop)

Problem:
Given an integer array nums, return true if any value
appears at least twice, else return false.

Approach:
- Use two nested for loops
- Compare each element with others
- If same element found, return true

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};