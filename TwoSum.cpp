/*
LeetCode #1 – Two Sum (Beginner Approach)

Approach:
- Use two for loops
- Check every pair of elements
- If nums[i] + nums[j] == target, return indices

Time Complexity: O(n^2)
Space Complexity: O(1)

This approach is EASY and perfect for beginners.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};