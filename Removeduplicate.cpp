/*
LeetCode #26 – Remove Duplicates from Sorted Array
Beginner Approach (Using for loop)

Problem:
Given a sorted array nums, remove duplicates in-place
and return the number of unique elements.

Approach:
- Use one pointer (index)
- Compare current element with previous unique element
- If different, move it forward

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int index = 0; // position of last unique element

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[index]) {
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};