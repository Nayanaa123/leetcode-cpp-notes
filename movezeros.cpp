/*
LeetCode #283 – Move Zeroes
Beginner Approach (Using for loop)

Problem:
Given an integer array nums, move all 0's to the end
while maintaining the relative order of non-zero elements.

Approach:
- Use one pointer 'index'
- Traverse the array
- When element is non-zero, place it at nums[index]
- After loop, fill remaining positions with 0

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        // Move non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        // Fill remaining positions with zero
        for (int i = index; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};